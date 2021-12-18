//
//  main.cpp
//  LCS
//
//  Created by 김수진 on 2021/03/15.
//

#include <iostream>
#include <cstring>
using namespace std;

int n;
int h[100][100];
bool visit[100][100]={false, };
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfs(int a, int b, int height) {
    visit[a][b]=true;
    
    for(int i=0;i<4;i++) {
        int x=a+dx[i];
        int y=b+dy[i];
        
        if(x>=0 && x<n && y>=0 && y<n) {
            if(!visit[x][y] && h[x][y]>height) {
                visit[x][y]=true;
                dfs(x,y,height);
            }
        }
    }
}

int main() {
    int minVal=100;
    int maxVal=1;
    int num=0;
    int result=1;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>h[i][j];
            minVal=min(minVal,h[i][j]);
            maxVal=max(maxVal,h[i][j]);
        }
    }
    for(int i=minVal;i<=maxVal;i++) {
        num=0;
        memset(visit,false,sizeof(visit));
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                if(!visit[j][k] && h[j][k]>i) {
                    num++;
                    dfs(j,k,i);
                }
            }
        }
        result=max(num,result);
    }
    cout<<result<<endl;
    
    return 0;
}
