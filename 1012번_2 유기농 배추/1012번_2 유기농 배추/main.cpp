//
//  main.cpp
//  1012번_2 유기농 배추
//
//  Created by 김수진 on 2021/06/30.
//

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int map[51][51];
int m, n, cnt=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int bfs(int x, int y) {
    cnt++;
    map[x][y]=0;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    
    while(!q.empty()) {
        int ax=q.front().first;
        int ay=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++) {
            int bx=ax+dx[i];
            int by=ay+dy[i];
            
            if(bx>=0 && by>=0 && bx<m && by<n && map[bx][by]==1) {
                map[bx][by]=0;
                q.push(make_pair(bx, by));
            }
        }
    }
    return cnt;
}

int main() {
    int t, k;
    int first, second;
    
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>m>>n>>k;
        for(int j=0;j<k;j++) {
            cin>>first>>second;
            map[first][second]=1;
        }
        for(int j=0;j<m;j++) {
            for(int k=0;k<n;k++) {
                if(map[j][k]==1) bfs(j, k);
            }
        }
        cout<<cnt<<endl;
        cnt=0;
        memset(map, 0, sizeof(map));
    }
    return 0;
}
