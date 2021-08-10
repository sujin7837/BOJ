//
//  main.cpp
//  2631번 줄세우기
//
//  Created by 김수진 on 2021/08/09.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n;
vector<int> v;
queue<int> q[201];

void bigNum(int a) {
    auto it=find(v.begin(),v.end(),a);
    for(int i=it-v.begin();i<n;i++) {
        if(v[i]>a) q[a].push(v[i]);
    }
}

int main() {
    int num;
    int maxNum=0;
    int dp[201]={0,};
    
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        v.push_back(num);
    }
    bigNum(n);
    dp[n]=1;
    for(int i=n-1;i>0;i--) {
        bigNum(i);
        if(!q[i].empty()) {
            while(!q[i].empty()) {
                int front=q[i].front();
                q[i].pop();
                dp[i]=max(dp[i],1+dp[front]);
            }
        } else dp[i]=1;
    }
    for(int i=1;i<=n;i++) {
        if(dp[i]>maxNum) maxNum=dp[i];
    }
    cout<<n-maxNum<<endl;
    
    return 0;
}
