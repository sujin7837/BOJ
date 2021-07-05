//
//  main.cpp
//  1389번 케빈 베이컨의 6단계 법칙
//
//  Created by 김수진 on 2021/07/05.
//

#include <iostream>
#include <algorithm>
#define INF 987654321
using namespace  std;

int main() {
    int n, m;
    int a, b;
    int dp[101][101]={0,};
    int person=0;
    int minimum=INF;
    
    cin>>n>>m;
    for(int i=0;i<m;i++) {
        cin>>a>>b;
        dp[a][b]=1;
        dp[b][a]=1;
    }

    for(int k=1;k<=n;k++) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(i!=j) {
                    if(dp[i][k]&&dp[k][j]) {
                        if(dp[i][j]==0) dp[i][j]=dp[i][k]+dp[k][j];
                        else dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]);
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++) {
        int result=0;
        for(int j=1;j<=n;j++) {
            result+=dp[i][j];
        }
        if(result<minimum) {
            minimum=result;
            person=i;
        }
    }
    cout<<person<<endl;
    
    return 0;
}
