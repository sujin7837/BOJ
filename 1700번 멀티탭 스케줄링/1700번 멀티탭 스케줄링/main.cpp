//
//  main.cpp
//  1700번 멀티탭 스케줄링
//
//  Created by 김수진 on 2021/08/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int main() {
    int n, k, input;
    int cnt=0;
    bool visit[101];
    vector<int> v;
    vector<int> now;
    queue<int> q;
    
    cin>>n>>k;
    for(int i=0;i<k;i++) {
        cin>>input;
        v.push_back(input);
    }
    for(int i=0;i<n;i++) {
        now.push_back(v[i]);
        v.erase(v.begin());
    }
    while(v.size()>=n) {
        memset(visit, false, sizeof(visit));
        for(int i=0;i<n;i++) {
            auto it=find(now.begin(), now.end(), v[i]);
            if(it!=now.end()) {
                visit[i]=true;
            } else {
                q.push(v[i]);
                cnt++;
            }
        }
        while (!q.empty()) {
            int front=q.front();
            for(int i=0;i<n;i++) {
                
            }
        }
    }
    
    return 0;
}
