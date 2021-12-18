//
//  main.cpp
//  1261번 알고스팟
//
//  Created by 김수진 on 2021/04/06.
//

#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;

int n,m;
int wallNum[101][101];
int arr[101][101];
int bx[4]={-1,1,0,0};
int by[4]={0,0,-1,1};

void bfs(int a, int b) {
    queue<pair<int,int>> q;
    q.push(make_pair(a, b));
    wallNum[a][b]=0;
    
    while(!q.empty()) {
        int start=q.front().first;
        int end=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++) {
            int x=start+bx[i];
            int y=end+by[i];
            
            if(x<0 || x>=n || y<0 || y>=m) continue;
            else {
                if(arr[x][y]==1) {
                    if(wallNum[x][y]>wallNum[start][end]+1) {
                        wallNum[x][y]=wallNum[start][end]+1;
                        q.push(make_pair(x, y));
                    }
                } else if(arr[x][y]==0) {
                    if(wallNum[x][y]>wallNum[start][end]) {
                        wallNum[x][y]=wallNum[start][end];
                        q.push(make_pair(x, y));
                    }
                }
            }
        }
    }
}

int main() {
    string s;
    
    cin>>n>>m;
    for(int i=0;i<m;i++) {
        cin>>s;
        for(int j=0;j<n;j++) {
            arr[i][j]=s[j]-'0';
            wallNum[i][j]=INF;
        }
    }
    bfs(0,0);
    cout<<wallNum[n-1][m-1]<<endl;
    
    return 0;
}
