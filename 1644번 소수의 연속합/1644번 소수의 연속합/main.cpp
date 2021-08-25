//
//  main.cpp
//  1644번 소수의 연속합
//
//  Created by 김수진 on 2021/08/25.
//

#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;

bool a[4000001]={true,};
vector<int> isPrime;

void primeNumber(int x) {
    memset(a, true, sizeof(a));
    for(int i=2;i<=x;i++) {
        if(a[i]==true) {
            isPrime.push_back(i);
            for(int j=i+i;j<=x;j+=i) {
                a[j]=false;
            }
        }
    }
}

int main() {
    int n, len=0, answer=0;
    int cnt=0;
    
    cin>>n;
    
    primeNumber(n);
    len=isPrime.size();
    int idx=0;
    
    for(int i=0;i<len;i++) {
        int idx=i;
        while(answer<n) {
            answer+=isPrime[idx];
            idx++;
            if(idx>=len) break;
        }
        if(answer==n) cnt++;
        answer=0;
    }
    cout<<cnt<<endl;
    
    return 0;
}
