//
//  main.cpp
//  16236번 아기 상어
//
//  Created by 김수진 on 2021/07/26.
//

#include <iostream>
#include <queue>
using namespace std;

int n;
int cntZero=0;
int sec=0;
int space[21][21];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
queue<pair<int, int>> q;

int dfs(int nx, int ny, int x, int y, int size, int cnt) {
    if(nx==x && ny==y) return sec;
    else {
        for(int i=0;i<4;i++) {
            nx=nx+dx[i];
            ny=ny+dy[i];
            
            if(nx>=0 && nx<n && ny>=0 && ny<n) {
                if(space[nx][ny]>0 && space[nx][ny]<size) {
                    space[nx][ny]=0;
                    cnt++;
                    
                }
            }
        }
    }
}

bool canFind() {
    while(1) {
        if(q.empty()) return false;
        else return true;
    }
}

int main() {
    int result=0;
    int startx,starty;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>space[i][j];
            if(space[i][j]==9) {
                startx=i;
                starty=j;
            }
            else if(space[i][j]!=0) q.push(make_pair(i,j));
        }
    }
    while(!q.empty()) {
        if(canFind()) {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
//            cout<<x<<" "<<y<<endl;
            dfs(startx, starty, x, y, 2, 0);
            startx=x;
            starty=y;
        }
    }
    
    cout<<result<<endl;
    
    return 0;
}
