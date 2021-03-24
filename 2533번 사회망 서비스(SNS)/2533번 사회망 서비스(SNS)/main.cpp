//
//  main.cpp
//  2533번 사회망 서비스(SNS)
//
//  Created by 김수진 on 2021/03/23.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> v[1000001];
vector<int> treeMaking[1000001];
bool visit[1000001]={false,};
int cnt[1000001][2];
int n;

void treeT(int root) {
    visit[root]=true;
    
    for(int i=0;i<v[root].size();i++) {
        if(!visit[v[root][i]]) {
            treeMaking[root].push_back(v[root][i]);
            treeT(v[root][i]);
        }
    }
}

int dp(int root, int adap) {
    if(cnt[root][adap]!=-1) return cnt[root][adap];
    
    if(adap==0) {
        cnt[root][adap]=0;
        for(int i=0;i<treeMaking[root].size();i++) {
            cnt[root][adap]+=dp(treeMaking[root][i],1);
        }
    } else {
        cnt[root][adap]=1;
        for(int i=0;i<treeMaking[root].size();i++) {
            cnt[root][adap]+=min(dp(treeMaking[root][i],0),dp(treeMaking[root][i],1));
        }
    }
    return cnt[root][adap];
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b;
    
    cin>>n;
    for(int i=0;i<n-1;i++) {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    treeT(1);
    memset(cnt,-1,sizeof(cnt));

    cout<<min(dp(1,0),dp(1,1))<<endl;

    return 0;
}
