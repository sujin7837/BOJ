//
//  main.cpp
//  1260번 DFS와 BFS
//
//  Created by 김수진 on 2021/03/02.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace  std;

int n,m,v;
bool visitDfs[1001]={false};
bool visitBfs[1001]={false};
int arr[1001][1001]={0};

void dfs(int a) {
    visitDfs[a]=true;
    cout<<a;
    for(int i=1;i<=n;i++) {
        if(!visitDfs[i]&&arr[a][i]==1) {
            cout<<" ";
            dfs(i);
        }
    }
}

void bfs(int a) {
    queue<int> q;
    
    visitBfs[a]=true;
    q.push(a);
    cout<<a;
    while (!q.empty()) {
        int node=q.front();
        q.pop();
        
        for(int i=1;i<=n;i++) {
            if(!visitBfs[i]&&arr[node][i]==1) {
                q.push(i);
                visitBfs[i]=1;
                cout<<" "<<i;
            }
        }
    }
}

int main() {
    int first, second;
    
    cin>>n>>m>>v;
    
    for(int i=0;i<m;i++) {
        cin>>first>>second;
        arr[first][second]=1;
        arr[second][first]=1;
    }
    dfs(v);
    cout<<endl;
    bfs(v);
    
    return 0;
}
