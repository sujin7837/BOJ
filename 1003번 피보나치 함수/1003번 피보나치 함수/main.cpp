//
//  main.cpp
//  1003번 피보나치 함수
//
//  Created by 김수진 on 2021/06/30.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    int dp[41][2]={0, };
    
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n;
        dp[0][0]=1; dp[1][1]=1;
        for(int i=2;i<=n;i++) {
            dp[i][0]=dp[i-1][0]+dp[i-2][0];
            dp[i][1]=dp[i-1][1]+dp[i-2][1];
        }

        cout<<dp[n][0]<<" "<<dp[n][1]<<endl;
    }
    
    return 0;
}
