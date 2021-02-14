//
//  main.cpp
//  11399번: ATM
//
//  Created by 김수진 on 2021/02/14.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    int p[2000]={0,};
    int w[2000]={0,};
    int sum=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++) {
        cin>>p[i];
    }
    sort(p,p+n);
    w[0]=p[0];
    sum=w[0];
    for(int i=1;i<n;i++) {
        w[i]=w[i-1]+p[i];
        sum+=w[i];
    }
    cout<<sum<<endl;
    
    return 0;
}
