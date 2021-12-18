//
//  main.cpp
//  1699번 제곱수의 합
//
//  Created by 김수진 on 2021/08/10.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, num, cnt=0;
    
    cin>>n;
    
    while(n>3) {
        num=int(sqrt(n));
        for(int i=num;i<=n;i++) {
            
        }
        cnt++;
    }
    cnt+=n;
    
    cout<<cnt<<endl;
    
    return 0;
}
