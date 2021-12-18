//
//  main.cpp
//  7576번 토마토
//
//  Created by 김수진 on 2021/03/05.
//

#include <iostream>
#include <queue>
using namespace std;

int m,n;
int arr[1001][1001]={0};

queue<pair<int,int>> q;
int bx[4]={-1,1,0,0};
int by[4]={0,0,-1,1};

void bfs() {
    while(!q.empty()) {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++) {
            int a=x+bx[i];
            int b=y+by[i];
            
            if(a>=0 && a<n && b>=0 && b<m) {
                if(arr[a][b]==0) {
                    arr[a][b]=arr[x][y]+1;
                    q.push(make_pair(a, b));
                }
            }
        }
    }
}

int main() {
    int max=0;
    
    cin>>m>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
            if(arr[i][j]==1) q.push(make_pair(i,j));
        }
    }
    bfs();
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j]==0) {
                cout<<"-1"<<endl;
                return 0;
            }
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<max-1<<endl;
    
    return 0;
}
