//
//  main.cpp
//  10844번 쉬운 계단 수
//
//  Created by 김수진 on 2021/08/09.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    long long num[101][12]={0,};
    long long result=0;
    
    cin>>n;
    for(int i=2;i<=10;i++) {
        num[0][i]=1;
    }
    if(n>1) {
        for(int i=0;i<n-1;i++) {
            for(int j=1;j<11;j++) {
                num[i+1][j]=(num[i][j-1]+num[i][j+1])%1000000000;
            }
        }
    }
    for(int i=1;i<11;i++) result+=num[n-1][i];
    result%=1000000000;
    cout<<result<<endl;
    
    return 0;
}
