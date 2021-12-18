//
//  main.cpp
//  10773번 제로
//
//  Created by 김수진 on 2021/03/15.
//

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k,n;
    int sum=0;
    stack<int> s;
    
    cin>>k;
    for(int i=0;i<k;i++) {
        cin>>n;
        if(n!=0) s.push(n);
        else s.pop();
    }
    
    while(!s.empty()) {
        sum+=s.top();
        s.pop();
    }
    cout<<sum<<endl;
    
    return 0;
}
