//
//  main.cpp
//  2164번 카드2
//
//  Created by 김수진 on 2021/06/29.
//

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    queue<int> q;
    
    cin>>n;
    for(int i=1;i<=n;i++) {
        q.push(i);
    }
    
    while(q.size()) {
        if(q.size()==1) {
            cout<<q.front()<<endl;
            break;
        } else {
            q.pop();
            q.push(q.front());
            q.pop();
        }
    }
    
    return 0;
}
