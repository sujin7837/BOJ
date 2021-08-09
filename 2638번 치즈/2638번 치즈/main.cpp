//
//  main.cpp
//  2638번 치즈
//
//  Created by 김수진 on 2021/08/09.
//

#include <iostream>
#include <cstring>
using namespace std;

int n,m;
int map[101][101];
bool visit[101][101]={false, };
bool visitWay[101][101]={false, };
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int vc=0;
int air[101][101]={0,};

bool way(int a, int b, int c, int d) {
    if(a==c && b==d) return true;
    else {
        for(int i=0;i<4;i++) {
            int nx=a+dx[i];
            int ny=b+dy[i];
            
            if(nx>=0 && nx<m && ny>=0 && ny<n && map[nx][ny]==0) {
                if(!visitWay[nx][ny]) {
                    visitWay[nx][ny]=true;
                    way(nx,ny,c,d);
                }
            }
        }
    }
    return false;
}

void dfs(int a, int b) {
    for(int i=0;i<4;i++) {
        int nx=a+dx[i];
        int ny=b+dy[i];
        
        if(nx>=0 && nx<m && ny>=0 &&ny<n) {
            if(visit[nx][ny] && map[nx][ny]==0) {
                air[a][b]++;
            }
        }
    }
}

int main() {
    int cnt=0;
    
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>map[i][j];
        }
    }
    while(1) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(map[i][j]==0) {
                    if(way(0,0,i,j)) {
                        visit[i][j]=true;
                        vc++;
                    }
                }
                cout<<way(0,0,i,j)<<" ";
            }
        }
        cout<<vc<<endl;
        if(vc>=n*m) break;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(map[i][j]==1) {
                    dfs(i,j);
                    if(air[i][j]>=2) {
                        map[i][j]=0;
                        visit[i][j]=true;
                    }
                }
            }
        }
        cnt++;
        for(int i=0;i<n;i++) {
            memset(air[i], 0, sizeof(air[i]));
            memset(visit[i], 0, sizeof(visit[i]));
        }
    }
    cout<<cnt<<endl;
    
    return 0;
}
