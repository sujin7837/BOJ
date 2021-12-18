//
//  main.cpp
//  2352번 반도체 설계
//
//  Created by 김수진 on 2021/08/10.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> v;
queue<int> q[40001];

void maxNum(int a) {
    auto it=find(v.begin(),v.end(),a);
    for(int i=it-v.begin();i<v.size();i++) {
        if(v[i]>a) q[a].push(v[i]);
    }
}

int main() {
    int n, num;
    int result=0;
    int dp[40001]={0,};
    
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>num;
        v.push_back(num);
    }
    dp[n]=1;
    for(int i=n-1;i>0;i--) {
        maxNum(i);
        if(!q[i].empty()) {
            while(!q[i].empty()) {
                int front=q[i].front();
                q[i].pop();
                dp[i]=max(dp[i], 1+dp[front]);
            }
        } else dp[i]=1;
    }
    for(int i=1;i<=n;i++) {
        if(dp[i]>result) result=dp[i];
    }
    cout<<result<<endl;
    
    return 0;
}
