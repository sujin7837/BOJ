//
//  main.cpp
//  2217번:로프
//
//  Created by 김수진 on 2021/02/14.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    int k[200000]={0,};
    int max=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++) {
        cin>>k[i];
    }
    sort(k, k+n);
    for(int i=0;i<n;i++) {
        if(k[i]*(n-i)>max) max=k[i]*(n-i);
    }

    cout<<max<<endl;
    
    return 0;
}
