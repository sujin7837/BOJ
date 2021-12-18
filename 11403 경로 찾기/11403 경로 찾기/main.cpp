//
//  main.cpp
//  11403 경로 찾기
//
//  Created by 김수진 on 2021/07/20.
//

#include <iostream>
#include <cstring>
using namespace std;

int n;
int map[101][101];
bool visit[101]={false, };

void dfs(int x) {
    for(int i=0;i<n;i++) {
        if(map[x][i]==1 && !visit[i]) {
            visit[i]=true;
            dfs(i);
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
    
    for(int i=0;i<n;i++) {
        memset(visit, false, sizeof(visit));
        dfs(i);
        for(int j=0;j<n;j++) {
            if(visit[j]) map[i][j]=1;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) cout<<map[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
