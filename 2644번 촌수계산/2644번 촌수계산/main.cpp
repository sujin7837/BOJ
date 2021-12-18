//
//  main.cpp
//  2644번 촌수계산
//
//  Created by 김수진 on 2021/03/05.
//

#include <iostream>
using namespace std;

bool visit[101]={false, };
int n,a,b,m;
int result=0;
int arr[101][101]={0, };

void dfs(int from, int to, int num) {
    visit[from]=true;
    
    if (from==to) {
        result=num;
        return;
    }
    
    for(int i=1;i<=n;i++) {
        if(!visit[i] && arr[from][i]==1) {
            dfs(i,to,num+1);
        }
    }
    return;
}

int main() {
    int x,y;
    
    cin>>n>>a>>b>>m;
    for(int i=0;i<m;i++) {
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    }
    dfs(a,b,0);
    
    if(result==0) cout<<"-1"<<endl;
    else cout<<result<<endl;
    
    return 0;
}
