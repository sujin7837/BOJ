//
//  main.cpp
//  2693번 N번째 큰 수
//
//  Created by 김수진 on 2021/02/26.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    
    cin>>t;
    for(int i=0;i<t;i++) {
        int a[11];
        for(int j=0;j<10;j++) cin>>a[j];
        sort(a,a+10);
        cout<<a[7]<<endl;
    }
    
    return 0;
}
