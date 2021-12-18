//
//  main.cpp
//  2668번 숫자고르기
//
//  Created by 김수진 on 2021/08/10.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int cnt[101]={0,};
int num[101];
bool visit[101]={false,};
vector<int> v;

void dfs(int a, int b) {
    if(visit[a]) {
        if(a==b) v.push_back(a);
    } else {
        visit[a]=true;
        dfs(num[a], b);
    }
}

int main() {
    int n;
    
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>num[i];
    }
    for(int i=1;i<=n;i++) {
        memset(visit, false, sizeof(visit));
        dfs(i,i);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
    }
    
    return 0;
}
