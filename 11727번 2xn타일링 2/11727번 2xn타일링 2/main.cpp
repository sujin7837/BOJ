//
//  main.cpp
//  11727번 2xn타일링 2
//
//  Created by 김수진 on 2021/07/21.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    int num[1001];
    
    cin>>n;
    
    num[1]=1; num[2]=3;
    if(n>=3) {
        for(int i=3;i<=n;i++) {
            num[i]=(num[i-1]+num[i-2]*2)%10007;
        }
        cout<<num[n]<<endl;
    } else cout<<num[n]<<endl;
        
    return 0;
}
