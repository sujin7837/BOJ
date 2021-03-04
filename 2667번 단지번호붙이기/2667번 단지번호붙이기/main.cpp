//
//  main.cpp
//  2667번 단지번호붙이기
//
//  Created by 김수진 on 2021/03/04.
//

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int n;
int num=0;
int numOfHome[500]={0,};
int visit[25][25]={false};
int bx[4]={-1,1,0,0};
int by[4]={0,0,-1,1};
string arr[25];

void bfs(int a,int b) {
    visit[a][b]=true;
    numOfHome[num]++;
    
    queue<pair<int,int>> q;
    q.push(make_pair(a, b));
    
    while(!q.empty()) {
        a=q.front().first;
        b=q.front().second;
        
        q.pop();
        
        for(int i=0;i<4;i++) {
            int x=a+bx[i];
            int y=b+by[i];
            
            if(x>=0 && x<n && y>=0 && y<n) {
                if(!visit[x][y] && arr[x][y]=='1') {
                    visit[x][y]=true;
                    q.push(make_pair(x,y));
                    numOfHome[num]++;
                }
            }
        }
    }
}

int main() {
    cin>>n;
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(!visit[i][j] && arr[i][j]=='1') {
                bfs(i,j);
                num++;
            }
        }
    }
    
    sort(numOfHome,numOfHome+num);
    cout<<num<<endl;
    for(int i=0;i<num;i++) {
        cout<<numOfHome[i]<<endl;
    }
    
    return 0;
}
