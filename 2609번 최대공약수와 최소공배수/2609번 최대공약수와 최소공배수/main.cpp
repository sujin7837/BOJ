//
//  main.cpp
//  2609번 최대공약수와 최소공배수
//
//  Created by 김수진 on 2021/06/28.
//

#include <iostream>
using namespace std;

int GCD(int a, int b) {
    int min;
    
    if(a<b) min=a;
    else min=b;
    
    for(int i=min;i>0;i--) {
        if(a%i==0) {
            if(b%i==0) return i;
        }
    }
    return 0;
}

int LSM(int a, int b) {
    int result=a*b;
    int c=GCD(a, b);
    
    result/=c;
    
    return result;
}

int main() {
    int n,m;
    
    cin>>n>>m;
    cout<<GCD(n, m)<<endl<<LSM(n, m);
    
    return 0;
}
