//
//  main.cpp
//  1780번 종이의 개수
//
//  Created by 김수진 on 2021/07/06.
//

#include <iostream>
using namespace std;

int n, m;
int matrix[2500][2500];
int Cnt[3]={0,}, cnt=0;

bool check(int x, int y, int m) {    //단위 종이 내의 모든 칸들이 같은 값인지 확인한다.
    int start=matrix[x][y];
    for(int i=x;i<x+m;i++) {
        for(int j=y;j<y+m;j++) {
            if(start!=matrix[i][j]) return false;
        }
    }
    return true;
}

void divide(int x, int y, int m) {    //단위 종이의 크기를 9분할한다.
    if(check(x, y, m)) Cnt[matrix[x][y]+1]++;    //단위 종이 내의 모든 칸들이 같은 값을 가질 경우 해당하는 숫자의 개수를 1만큼 더한다.
    else {    //단위 종이 내에 같은 값을 갖지 않는 경우가 존재하면, 종이를 9분할한다.
        m/=3;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                divide(x+m*i, y+m*j, m);
            }
        }
    }
}

int main() {
    cin>>n;
    m=n;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    divide(0, 0, m);    //같은 값을 갖는 단위 종이의 개수를 계산한다.
    for(int i=0;i<3;i++) cout<<Cnt[i]<<endl;    //-1, 0, 1로 각각 채워진 종이의 개수를 출력한다.
    
    return 0;
}
