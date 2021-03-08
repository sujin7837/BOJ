//
//  main.cpp
//  1012번 유기농 배추
//
//  Created by 김수진 on 2021/03/08.
//

#include <iostream>
#include <cstring>
using namespace std;

int m, n;
int arr[2501][2501]={0,};
bool visit[2501][2501]={false};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int num=0;

void dfs(int a, int b) {
    visit[a][b]=true;
    
    for(int i=0;i<4;i++) {
        int ax=a+dx[i];
        int bx=b+dy[i];
        
        if(ax>=0 && ax<m && bx>=0 && bx<n) {
            if(!visit[ax][bx] && arr[ax][bx]==1) dfs(ax,bx);
        }
    }
    
}

int main() {
    int t, k;
    int x, y;
    
    
    cin>>t;
    
    for(int i=0;i<t;i++) {
        cin>>m>>n>>k;
        
        for(int i=0;i<k;i++) {
            cin>>x>>y;
            arr[x][y]=1;
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(!visit[i][j] && arr[i][j]==1) {
                    num++;
                    dfs(i,j);
                }
            }
        }
        cout<<num<<endl;
        num=0;
        memset(visit, false, sizeof(visit));
        memset(arr, 0, sizeof(arr));
    }
    
    return 0;
}
