//
//  main.cpp
//  1543번 문서 검색
//
//  Created by 김수진 on 2021/03/26.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string search;
    int len;
    int now;
    int num=0;
    
    //cin으로 입력시 enter까지 포함되어 공백문자가 포함되기 때문에 getline으로 문자를 받아야 함
    getline(cin,s);
    getline(cin,search);
    len=search.length();

    if(search.length()>s.length()) cout<<0<<endl;
    else {
        now=s.find(search);
        if(now!=-1) {
            while(now<=s.length()) {
                num++;
                now=s.find(search,now+len);
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
