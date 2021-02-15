//
//  main.cpp
//  1463번 1로 만들기
//
//  Created by 김수진 on 2021/02/15.
//

#include <iostream>
using namespace std;

int main(void) {
    int p[2000000]={0,};
    int n;
    p[2]=1; p[3]=1;
    
    cin>>n;
    
    for(int i=4;i<=n;i++) {
        if(i%3==0) {
            if(i%2==0) {
                p[i]=min(min(p[i/3], p[i/2]), p[i-1])+1;
            }
            else {
                p[i]=min(p[i/3], p[i-1])+1;
            }
        }
        else if(i%2==0) p[i]=min(p[i/2], p[i-1])+1;
        else p[i]=p[i-1]+1;
    }
    cout<<p[n]<<endl;
    
    return 0;
}
