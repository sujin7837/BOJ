//
//  main.cpp
//  11866번 요세푸스 문제0
//
//  Created by 김수진 on 2021/06/29.
//

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    int f;
    queue<int> q;
    
    cin>>n>>k;
    for(int i=1;i<=n;i++) q.push(i);
    
    cout<<"<";
    while(q.size()) {
        if(q.size()==1) {
            cout<<q.front()<<">";
            q.pop();
            break;
        } else {
            for(int i=0;i<k-1;i++) {
                q.push(q.front());
                q.pop();
            }
            cout<<q.front()<<", ";
            q.pop();
        }
    }
    
    return 0;
}
