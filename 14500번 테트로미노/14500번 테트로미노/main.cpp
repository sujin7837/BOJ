//
//  main.cpp
//  14500번 테트로미노
//
//  Created by 김수진 on 2021/07/22.
//

#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int map[501][501];

//1. ****
//2. *
//   *
//   *
//   *
int ternomino1(int x, int y) {
    int sum1=0, sum2=0;

    for(int i=0;i<4;i++) {
        if(y+i<m) sum1+=map[x][y+i];
        if(x+i<n) sum2+=map[x+i][y];
    }
    return max(sum1,sum2);
}

//**
//**
int ternomino2(int x, int y) {
    int sum=0;

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            if(x+i<n && y+j<m) sum+=map[x+i][y+j];
        }
    }

    return sum;
}

//1. *
//.  *
//.  **
//2. ***
//.  *
//3. **
//.   *
//.   *
//4.   *
//.  ***
//5.   *
//     *
//    **
//6. ***
//     *
//7. **
//   *
//   *
//8. *
//   ***
int ternomino3(int x, int y) {
    int sum1=0, sum2=0, sum3=0, sum4=0;
    int sum5=0, sum6=0, sum7=0, sum8=0;

    for(int i=0;i<3;i++) {
        if(x+i<n && y+1<m){
            sum1+=map[x+i][y];
            sum3+=map[x+i][y+1];
            sum5+=map[x+i][y+1];
            sum7+=map[x+i][y];
        }
        if(y+i<m && x+1<n) {
            sum2+=map[x][y+i];
            sum4+=map[x+1][y+i];
            sum6+=map[x][y+i];
            sum8+=map[x+1][y+i];
        }
    }
    sum1+=map[x+2][y+1];
    sum2+=map[x+1][y];
    sum3+=map[x][y];
    sum4+=map[x][y+2];
    sum5+=map[x+2][y];
    sum6+=map[x+1][y+2];
    sum7+=map[x][y+1];
    sum8+=map[x][y];
//    cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<endl;
    return max(max(max(sum1,sum2),max(sum3,sum4)), max(max(sum5,sum6),max(sum7,sum8)));
}

//1. *
//.  **
//    *
//2.  **
//   **
//3.  *
//   **
//   *
//4. **
//    **
int ternomino4(int x, int y) {
    int sum1=0,sum2=0,sum3=0,sum4=0;

    for(int i=0;i<2;i++) {
        if(y+1<m && x+1+i<n) {
            sum1+=map[x+i][y]+map[x+1+i][y+1];
            sum3+=map[x+i][y+1]+map[x+1+i][y];
        }
        if(x+1<n && y+1+i<m) {
            sum2+=map[x][y+1+i]+map[x+1][y+i];
            sum4+=map[x][y+i]+map[x+1][y+1+i];
        }
    }
    return max(max(sum1,sum2), max(sum3, sum4));
}

//1. ***
//    *
//2.  *
//   **
//    *
//3.  *
//   ***
//4. *
//.  **
//.  *
int ternomino5(int x, int y) {
    int sum1=0, sum2=0, sum3=0, sum4=0;

    for(int i=0;i<3;i++) {
        if(x+i<n && y+1<m) {
            sum4+=map[x+i][y];
            sum2+=map[x+i][y+1];
        }
        if(y+i<m && x+1<n) {
            sum3+=map[x+1][y+i];
            sum1+=map[x][y+i];
        }
    }
    sum1+=map[x+1][y+1];
    sum2+=map[x+1][y];
    sum3+=map[x][y+1];
    sum4+=map[x+1][y+1];

    return max(max(sum1,sum2), max(sum3,sum4));
}

int main() {
    int result=0;
    int ternomino=0;

    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>map[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            ternomino=max(max(max(ternomino1(i, j),ternomino2(i, j)), max(ternomino3(i, j), ternomino4(i, j))),ternomino5(i, j));
            if(ternomino>result) {
                result=ternomino;
            }
        }
    }
    cout<<result<<endl;

    return 0;
}
