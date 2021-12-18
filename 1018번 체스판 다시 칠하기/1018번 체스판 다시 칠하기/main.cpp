//
//  main.cpp
//  1018번 체스판 다시 칠하기
//
//  Created by 김수진 on 2021/06/25.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s[50];
string bw[8]={
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
string wb[8]={
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

int check_bw(int x, int y) {
    int bw_num=0;
    
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            if(s[x+i][y+j]!=bw[i][j]) bw_num++;
        }
    }
    return bw_num;
}

int check_wb(int x, int y) {
    int wb_num=0;
    
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            if(s[x+i][y+j]!=wb[i][j]) wb_num++;
        }
    }
    return wb_num;
}

int main() {
    int n,m;
    int num;
    int minValue=2500;
    
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>s[i];
    }
    
    for(int i=0;i+8<=n;i++) {
        for(int j=0;j+8<=m;j++) {
            num=min(check_bw(i, j), check_wb(i, j));
            if(num<minValue) minValue=num;
        }
    }
    cout<<minValue<<endl;
    
    return 0;
}
