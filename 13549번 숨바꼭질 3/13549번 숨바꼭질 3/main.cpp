//
//  main.cpp
//  13549번 숨바꼭질 3
//
//  Created by 김수진 on 2021/04/06.
//

#include <iostream>
#include <queue>

using namespace std;

int n,k;
bool visit[100001]={false, };
queue<pair<int,int>> q;

void hideAndSeek() {
    while(!q.empty()) {
        int now=q.front().first;
        int time=q.front().second;
        visit[now]=true;
        q.pop();
        
        if(now==k) {
            cout<<time<<endl;
            break;
        }
        //2*x
        if(now*2<=100000 && !visit[now*2]) {
            q.push(make_pair(now*2, time));
            visit[now*2]=true;
        }
        //x-1
        if(now-1>=0 && !visit[now-1]) {
            q.push(make_pair(now-1, time+1));
            visit[now-1]=true;
        }
        //x+1
        if(now+1<=100000 && !visit[now+1]) {
            q.push(make_pair(now+1, time+1));
            visit[now+1]=true;
        }
    }
}

int main() {
    
    cin>>n>>k;
    q.push(make_pair(n, 0));
    hideAndSeek();
    
    return 0;
}
