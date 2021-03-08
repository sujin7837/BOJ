//
//  main.cpp
//  11724번 연결 요소의 개수
//
//  Created by 김수진 on 2021/03/08.
//

#include <iostream>
using namespace std;

int n, m;
int arr[1001][1001]={0,};
bool visit[1001]={false,};

void dfs(int a) {
    visit[a]=true;
    
    for(int i=1;i<=n;i++) {
        if(!visit[i] && arr[a][i]==1) dfs(i);
    }
}

int main() {
    int u,v;
    int num=0;
    
    cin>>n>>m;
    
    for(int i=0;i<m;i++) {
        cin>>u>>v;
        arr[u][v]=1;
        arr[v][u]=1;
    }
    for(int i=1;i<=n;i++) {
        if(!visit[i]) {
            num++;
            dfs(i);
        }
    }
    
    cout<<num<<endl;
    
    return 0;
}

