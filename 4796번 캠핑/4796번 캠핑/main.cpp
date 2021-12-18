//
//  main.cpp
//  4796번 캠핑
//
//  Created by 김수진 on 2021/02/15.
//

#include <iostream>
using namespace std;

int main(void) {
    int l, p, v;
    int q, r;
    int result=0;
    int num=0;
    
    while(true) {
        cin>>l>>p>>v;
        num++;
        if(p==0) {
            if(l==0 && v==0) break;
            else {
                cout<<"Case "<<num<<": "<<0<<endl;
                break;
            }
        }
        else {
            q=v/p;
            r=v%p;
            if(r<l) result=q*l+r;
            else result=(q+1)*l;
        
            cout<<"Case "<<num<<": "<<result<<endl;
        }
    }
    return 0;
}
