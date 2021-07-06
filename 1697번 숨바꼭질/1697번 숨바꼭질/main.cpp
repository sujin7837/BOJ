//
//  main.cpp
//  1697번 숨바꼭질
//
//  Created by 김수진 on 2021/07/06.
//

#include <iostream>
#include <queue>
using namespace std;

int n, k;
queue<pair<int, int>> q;
bool visit[100001]={false,};

void hideAndSeek() {    //bfs를 이용하여 문제를 해결한다.
    while(!q.empty()) {    //queue에 값이 존재하면 반복을 계속한다.
        int now=q.front().first;    //수빈이의 위치를 now에 저장한다.
        int time=q.front().second;    //현재 시간을 time에 저장한다.
        visit[now]=true;    //현재 위치를 방문했음을 저장한다.
        q.pop();    //방문한 위치를 queue에서 제거한다.
        
        //수빈이의 위치가 동생의 위치와 동일할 경우(수빈이가 동생을 찾은 경우)
        if(now==k) {
            cout<<time<<endl;
            break;
        }
        
        //2*x: 순간이동을 하는 경우
        if(2*now<=100000 && !visit[2*now]) {
            q.push(make_pair(2*now, time+1));
            visit[2*now]=true;
        }
        //x-1: 걷는 경우
        if(now-1>=0 && !visit[now-1]) {
            q.push(make_pair(now-1, time+1));
            visit[now-1]=true;
        }
        //x+1: 걷는 경우
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
