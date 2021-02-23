//
//  main.cpp
//  16956번 늑대와 양
//
//  Created by 김수진 on 2021/02/22.
//

#include <iostream>
using namespace std;

int r, c;
int nx, ny;
int result=1;
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};
char arr[510][510];
bool visit[510][510]={false, };

int bfs(int x, int y) {
    visit[x][y]=true;
    
    for(int i=0;i<4;i++) {
        nx=x+dx[i];
        ny=y+dy[i];
        
        if(nx<0||nx>=r||ny<0||ny>=c) continue;
        if(!visit[nx][ny]&&arr[nx][ny]=='W') result=0;
    }
    return result;
}

int main(void) {
    
    cin>>r>>c;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(arr[i][j]=='S') {
                bfs(i, j);
                if(result==0) continue;
            }
            if(arr[i][j]=='.') arr[i][j]='D';
        }
        if(result==0) continue;
    }
    
    cout<<result<<endl;
    if(result!=0) {
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
