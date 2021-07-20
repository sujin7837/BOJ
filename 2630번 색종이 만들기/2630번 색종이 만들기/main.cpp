//
//  main.cpp
//  2630번 색종이 만들기
//
//  Created by 김수진 on 2021/07/07.
//

#include <iostream>
using namespace std;

int n;
int map[129][129];
int cnt[2]={0,};

bool check(int row, int col, int size) {
    int start=map[row][col];
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            if(map[row+i][col+j]!=start) return false;
        }
    }
    return true;
}

void divide(int row, int col, int size) {
    if(check(row, col, size)) cnt[map[row][col]]++;
    else {
        size/=2;
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                divide(row+i*size, col+j*size, size);
            }
        }
    }
}

int main() {
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>map[i][j];
        }
    }
    divide(0, 0, n);
    cout<<cnt[0]<<endl<<cnt[1]<<endl;

    return 0;
}
