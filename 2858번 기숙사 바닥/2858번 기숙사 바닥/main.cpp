//
//  main.cpp
//  2858번 기숙사 바닥
//
//  Created by 김수진 on 2021/03/26.
//

#include <iostream>
using namespace std;

int r,b;

bool check(int x,int y) {
    if((x-2)*(y-2)==b) return true;
    else return false;
}

int main() {
    int l,w,sum;
    
    cin>>r>>b;
    sum=r+b;
    
    for(int i=3;i<sum;i++) {
        if(sum%i==0) {
            w=i;
            l=sum/i;
            if(check(l,w)) break;
        }
    }
    cout<<l<<" "<<w<<endl;
    
    return 0;
}
