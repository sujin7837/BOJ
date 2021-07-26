//
//  main.cpp
//  14500번-2 테트로미노
//
//  Created by 김수진 on 2021/07/26.
//

#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int cnt=0;
int sum=0;
int map[502][502];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool visit[502][502]={false, };

int dfs(int x, int y, int cnt, int cur) {
    if(cnt==4) {
        if(sum<cur) sum=cur;
    } else {
        for(int i=0;i<4;i++) {
            int nx=x+dx[i];
            int ny=y+dy[i];

            if(!visit[nx][ny] && nx>=0 && nx<n && ny>=0 && ny<m) {
                visit[nx][ny]=true;
                dfs(nx, ny, cnt+1, cur+map[nx][ny]);
                visit[nx][ny]=false;
            }
        }
    }

    return sum;
}

int notDfs(int x, int y) {
    int sum1=0, sum2=0, sum3=0, sum4=0;

    for(int i=0;i<3;i++) {
        sum1+=map[x][y+i];
        sum2+=map[x+1][y+i];
        sum3+=map[x+i][y];
        sum4+=map[x+i][y+1];
    }
    sum1+=map[x+1][y+1];
    sum2+=map[x][y+1];
    sum3+=map[x+1][y+1];
    sum4+=map[x+1][y];

    return max(max(sum1,sum2),max(sum3,sum4));
}

int main() {
    int result=0;
    int mid=0;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>map[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            mid=max(dfs(i, j, 0, 0),notDfs(i, j));
            if(mid>result) result=mid;
        }
    }
    cout<<result<<endl;
}
