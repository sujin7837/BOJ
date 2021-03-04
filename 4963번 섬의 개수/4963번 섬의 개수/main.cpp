//
//  main.cpp
//  4963번 섬의 개수
//
//  Created by 김수진 on 2021/03/02.
//

#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int w,h;
int arr[51][51]={0};
bool visit[51][51]={false};
int bx[8]={-1,-1,0,1,1,1,0,-1};
int by[8]={0,1,1,1,0,-1,-1,-1};
int num=0;

void bfs(int a, int b) {
    queue<pair<int,int>> q;
    visit[a][b]=true;
    
    q.push(make_pair(a,b));
    while(!q.empty()) {
        a=q.front().first;
        b=q.front().second;
        q.pop();
        
        for(int i=0;i<8;i++) {
            int x=a+bx[i];
            int y=b+by[i];
            
            if(x>0 || x<=h || y>0 ||y<=w) {
                if(!visit[x][y] && arr[x][y]==1) {
                    visit[x][y]=true;
                    q.push(make_pair(x,y));
                }
            }
        }
    }
}

int main() {
    
    while(1) {
        cin>>w>>h;
        
        if(w==0 && h==0) break;
        for(int i=1;i<=h;i++) {
            for(int j=1;j<=w;j++) {
                cin>>arr[i][j];
            }
        }
        for(int i=1;i<=h;i++) {
            for(int j=1;j<=w;j++) {
                if(!visit[i][j]&&arr[i][j]==1) {
                    num++;
                    bfs(i,j);
                }
            }
        }
        cout<<num<<endl;
        num=0;
        memset(arr, 0, sizeof(arr));
        memset(visit, false, sizeof(visit));
    }
    return 0;
}
