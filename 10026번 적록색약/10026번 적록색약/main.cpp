//
//  main.cpp
//  10026번 적록색약
//
//  Created by 김수진 on 2021/03/15.
//

#include <iostream>
#include <cstring>
using namespace std;

int n;
char arr[101][101];
bool visit[101][101]={false, };
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfsWithColor(int a, int b) {
    visit[a][b]=true;
    
    for(int i=0;i<4;i++) {
        int x=a+dx[i];
        int y=b+dy[i];
        
        if(x>=0 && x<n && y>=0 && y<n) {
            if(!visit[x][y] && arr[x][y]==arr[a][b]) {
                dfsWithColor(x, y);
            }
        }
    }
}

void dfsWithoutColor(int a, int b) {
    visit[a][b]=true;
    
    for(int i=0;i<4;i++) {
        int x=a+dx[i];
        int y=b+dy[i];
        
        if(x>=0 && x<n && y>=0 && y<n) {
            if(arr[a][b]=='B') {
                if(!visit[x][y] && arr[x][y]==arr[a][b]) dfsWithoutColor(x, y);
            } else {
                if(!visit[x][y] && arr[x][y]!='B') dfsWithoutColor(x, y);
            }
        }
    }
}

int main() {
    int numWithColor=0;
    int numWithoutColor=0;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(!visit[i][j]) {
                dfsWithColor(i,j);
                numWithColor++;
            }
        }
    }
    
    memset(visit, false, sizeof(visit));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(!visit[i][j]) {
                dfsWithoutColor(i, j);
                numWithoutColor++;
            }
        }
    }
    cout<<numWithColor<<" "<<numWithoutColor<<endl;
    
    return 0;
}
