//
//  main.cpp
//  1520번 내리막 길
//
//  Created by 김수진 on 2021/08/09.
//

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int m,n;
int map[501][501];
int dp[501][501]={-1,};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;
queue<pair<int,int>> q;
queue<int> cq;


int dfs(int a, int b) {
    if(dp[a][b]!=-1) return dp[a][b];
    if(a==0 && b==0) return 1;
    
    dp[a][b]=0;
    
    for(int i=0;i<4;i++) {
        int nx=a+dx[i];
        int ny=b+dy[i];
        
        if(nx>=0 && nx<n && ny>=0 && ny<m) {
            if(map[nx][ny]>map[a][b]) {
                dp[a][b]+=dfs(nx, ny);
            }
        }
    }
    return dp[a][b];
}

int main() {
    
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>map[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    
    cout<<dfs(m-1, n-1)+1<<endl;
    
    return 0;
}
