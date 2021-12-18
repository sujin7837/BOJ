//
//  main.cpp
//  1541번 잃어버린 괄호
//
//  Created by 김수진 on 2021/02/23.
//

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string temp="";
    string s;
    int result=0;
    bool plus=1;
    
    cin>>s;
    
    for(int i=0;i<s.size();i++) {
        if(s[i]=='+') {
            if(plus==1) {
                result+=stoi(temp);
                temp="";
            } else {
                result-=stoi(temp);
                temp="";
            }
        } else if(s[i]=='-') {
            if(plus==1) {
                result+=stoi(temp);
                temp="";
                plus=0;
            } else {
                result-=stoi(temp);
                temp="";
            }
        } else {
            temp+=s[i];
            if(i==s.size()-1) {
                if(plus==1) result+=stoi(temp);
                else result-=stoi(temp);
            }
        }
    }
    cout<<result<<endl;
    
    return 0;
}
