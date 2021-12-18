//
//  main.cpp
//  1259번 팰린드롬수
//
//  Created by 김수진 on 2021/06/25.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int input;
    int cmp;
    
    while(1) {
        cin>>input;
        if(input==0) break;
        string s=to_string(input);
        
        reverse(s.begin(), s.end());
        cmp=atoi(s.c_str());
        if(input==cmp) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    return 0;
}
