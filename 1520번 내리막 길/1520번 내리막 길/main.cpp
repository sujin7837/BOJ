//
//  main.cpp
//  1520번 내리막 길
//
//  Created by 김수진 on 2021/08/09.
//

#include <iostream>
using namespace std;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfs(int a, int b) {
    
}

int main() {
    int m,n;
    int map[501][501];
    int h=0;
    
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>map[i][j];
        }
    }
    
    return 0;
}
