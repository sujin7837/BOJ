//
//  main.cpp
//  1967번 트리의 지름
//
//  Created by 김수진 on 2021/03/18.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int sum=0;
int restart;
bool visit[10001];
vector<pair<int,int>> v[10001];

void dfs(int start, int wt) {
    visit[start]=true;
    
    if(sum<wt) {
        sum=wt;
        restart=start;
    }
    
    for(int i=0;i<v[start].size();i++) {
        if(!visit[v[start][i].first]) dfs(v[start][i].first,v[start][i].second+wt);
    }
}

int main() {
    int n,parent,child,weight;
    
    cin>>n;
    for(int i=0;i<n-1;i++) {
        cin>>parent>>child>>weight;
        v[parent].push_back(make_pair(child, weight));
        v[child].push_back(make_pair(parent, weight));
    }
    dfs(1,0);
    
    sum=0;
    memset(visit,false,sizeof(visit));
    dfs(restart,0);
    
    cout<<sum<<endl;
    
    return 0;
}
