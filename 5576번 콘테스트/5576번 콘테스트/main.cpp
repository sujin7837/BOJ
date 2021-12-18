//
//  main.cpp
//  5576번 콘테스트
//
//  Created by 김수진 on 2021/02/25.
//

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a,int b) {
    return a>b;
}

int main() {
    int a1[11];
    int a2[11];
    int sum1=0;
    int sum2=0;
    
    for(int i=0;i<10;i++) cin>>a1[i];
    for(int i=0;i<10;i++) cin>>a2[i];
    sort(a1,a1+10,cmp);
    sort(a2,a2+10,cmp);
    
    for(int i=0;i<3;i++) {
        sum1+=a1[i];
        sum2+=a2[i];
    }
    cout<<sum1<<" "<<sum2<<endl;
    
    return 0;
}
