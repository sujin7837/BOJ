//
//  main.cpp
//  1058번 친구
//
//  Created by 김수진 on 2021/09/15.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 1e9

int main() {
    int n, cnt, maxNum=0;
    int num[51][51]={0,};
    char c[52][52];
    
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin>>c[i][j];
            if(i==j) num[i][j]=0;
            else if(c[i][j]=='Y') num[i][j]=1;
            else num[i][j]=INF;
        }
    }
    for(int k=1;k<=n;k++) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(i==j || j==k || k==i) continue;
                else if(num[i][j]>num[i][k]+num[k][j])
                    num[i][j]=num[i][k]+num[k][j];
            }
        }
    }
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==j) continue;
            else {
                if(num[i][j]<=2) cnt++;
            }
        }
        maxNum=max(maxNum, cnt);
        cnt=0;
    }
    cout<<maxNum<<endl;
    
    return 0;
}
