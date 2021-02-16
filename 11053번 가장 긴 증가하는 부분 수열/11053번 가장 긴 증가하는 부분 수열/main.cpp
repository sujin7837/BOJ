//
//  main.cpp
//  11053번 가장 긴 증가하는 부분 수열
//
//  Created by 김수진 on 2021/02/16.
//

#include <iostream>
using namespace std;

int main(void) {
    int n;
    int a[1010]={0,};
    int len[1010]={0,};
    int now_max=0;
    int result=1;
    
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    
    for(int i=1;i<=n;i++) {
        now_max=0;
        for(int j=0;j<i;j++) {
            if(a[i]>a[j]) {
                if(now_max<len[j]) now_max=len[j];
            }
        }
        len[i]=now_max+1;
        result=max(result, len[i]);
    }
    
    cout<<result<<endl;
    
    return 0;
}
