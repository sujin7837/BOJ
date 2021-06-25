//
//  main.cpp
//  2475 검증수
//
//  Created by 김수진 on 2021/06/25.
//

#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e;
    int num;
    cin>>a>>b>>c>>d>>e;
    
    num=(a*a+b*b+c*c+d*d+e*e)%10;
    cout<<num<<endl;
        
    return 0;
}
