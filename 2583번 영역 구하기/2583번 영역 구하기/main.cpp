//
//  main.cpp
//  2583번 영역 구하기
//
//  Created by 김수진 on 2021/03/15.
//

#include <iostream>
#include <algorithm>
using namespace std;

int m,n;
int arr[101][101];
bool visit[101][101];
int num[101];
int idx=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfs(int a, int b) {
    visit[a][b]=true;
    num[idx]++;
    
    for(int i=0;i<4;i++) {
        int x=a+dx[i];
        int y=b+dy[i];
        
        if(x>=0 && x<m && y>=0 && y<n) {
            if(!visit[x][y] && arr[x][y]==0) {
                visit[x][y]=true;
                dfs(x,y);
            }
        }
    }
}

int main() {
    int k;
    int sx,sy,ex,ey;
    
    
    cin>>m>>n>>k;
    for(int i=0;i<k;i++) {
        cin>>sx>>sy>>ex>>ey;
        for(int j=sy;j<ey;j++) {
            for(int k=sx;k<ex;k++) {
                arr[j][k]=1;
            }
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(!visit[i][j] && arr[i][j]==0) {
                dfs(i,j);
                idx++;
            }
        }
    }
    sort(num,num+idx);
    
    cout<<idx<<endl;
    for(int i=0;i<idx;i++) cout<<num[i]<<" ";
    
    return 0;
}
