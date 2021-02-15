//
//  main.cpp
//  2579번 계단 오르기
//
//  Created by 김수진 on 2021/02/15.
//

#include <iostream>
using namespace std;

int main(void) {
    int n;
    int v[500]={0,};
    int p[500]={0,};
    
    cin>>n;
    
    for(int i=1;i<=n;i++) {
        cin>>v[i];
    }
    
    p[1]=v[1];
    p[2]=v[1]+v[2];
    for(int i=3;i<=n;i++) {
        p[i]=max(p[i-2], p[i-3]+v[i-1])+v[i];
    }
    cout<<p[n]<<endl;
    
    return 0;
}
