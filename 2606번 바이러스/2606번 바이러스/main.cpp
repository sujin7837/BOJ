//
//  main.cpp
//  2606번 바이러스
//
//  Created by 김수진 on 2021/02/21.
//

#include <iostream>
using namespace std;

int n;
int num=0;
int arr[110][110]={0,};
bool visit[110]={0,};


void dfs(int x) {
    visit[x]=true;
    num++;
    
    for(int i=1;i<=n;i++) {
        if(!visit[i]&&arr[x][i]) dfs(i);
    }
}

int main(void) {
    int pair;
    int first, second;
    
    cin>>n>>pair;

    for(int i=1;i<=pair;i++) {
        cin>>first>>second;
        arr[first][second]=1;
        arr[second][first]=1;
    }
    dfs(1);
    
    cout<<num-1<<endl;
    
    return 0;
}
