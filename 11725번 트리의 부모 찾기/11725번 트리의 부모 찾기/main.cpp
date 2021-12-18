//
//  main.cpp
//  11725번 트리의 부모 찾기
//
//  Created by 김수진 on 2021/03/08.
//

#include <iostream>
#include <vector>
using namespace std;

bool visit[100001]={false, };
vector<int> v[100001];
int parent[100001]={0,};

void findParent(int x) {
    visit[x]=true;
    
    for(int i=0;i<v[x].size();i++) {
        int node=v[x][i];
        
        if(!visit[node]) {
            parent[node]=x;
            findParent(node);
        }
    }
}

int main() {
    int n, a, b;
    
    cin>>n;
    
    for(int i=0;i<n-1;i++) {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    findParent(1);
    
    for(int i=2;i<=n;i++) cout<<parent[i]<<"\n";
    
    return 0;
}
