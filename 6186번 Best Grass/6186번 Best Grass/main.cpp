//
//  main.cpp
//  6186번 Best Grass
//
//  Created by 김수진 on 2021/02/18.
//

#include <iostream>
using namespace std;

int r, c;
char a[150][150];
bool visit[150][150];
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};

void bfs(int x, int y) {
    visit[x][y]=true;
    for(int i=0;i<4;i++) {
        int nx=x+dx[i];
        int ny=y+dy[i];
        
        if(nx<0||nx>=r||ny<0||ny>=c) continue;
        if(!visit[nx][ny]&&a[nx][ny]=='#') bfs(nx, ny);
    }
    
 }

int main(void) {
    int num=0;
    
    cin>>r>>c;
    
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(!visit[i][j]&&a[i][j]=='#') {
                bfs(i, j);
                num++;
            }
        }
    }
    
    cout<<num<<endl;
    
    return 0;
}
