//
//  main.cpp
//  11000번 강의실 배정
//
//  Created by 김수진 on 2021/03/09.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int n;
vector<pair<int,int>> v;

struct cmp {
    bool operator()(int p1, int p2) {
        return p1>p2;
    }
};

int main() {
    int a,b;
    priority_queue<int, vector<int>, cmp> pq;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(),v.end());
    pq.push(v[0].second);
        
    
    for(int i=1;i<n;i++) {
        if(pq.top()>v[i].first) pq.push(v[i].second);
        else {
            pq.pop();
            pq.push(v[i].second);
        }
    }
    cout<<pq.size()<<endl;
    
    return 0;
}
