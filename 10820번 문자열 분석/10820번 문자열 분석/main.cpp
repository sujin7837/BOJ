//
//  main.cpp
//  10820번 문자열 분석
//
//  Created by 김수진 on 2021/03/10.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numOfSmall=0;
    int numOfBig=0;
    int numOfNum=0;
    int numOfBlank=0;
    string s;
    
    while(getline(cin, s)) {
        if(s.length()==0) break;
        for(int i=0;i<s.size();i++) {
            if(s[i]>='a' && s[i]<='z') numOfSmall++;
            else if(s[i]>='A' && s[i]<='Z') numOfBig++;
            else if(s[i]>='0' && s[i]<='9') numOfNum++;
            else numOfBlank++;
        }
        cout<<numOfSmall<<" "<<numOfBig<<" "<<numOfNum<<" "<<numOfBlank<<endl;
        numOfSmall=0;
        numOfBig=0;
        numOfNum=0;
        numOfBlank=0;
    }
    return 0;
}
