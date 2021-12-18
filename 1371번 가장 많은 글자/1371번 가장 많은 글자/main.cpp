//
//  main.cpp
//  1371번 가장 많은 글자
//
//  Created by 김수진 on 2021/03/10.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int max=0;
    int num[26]={0,};
    
    
    while(cin>>s) {
        if(s.length()==0) break;
        for(int i=0;i<s.length();i++) num[s[i]-'a']++;
        
        s.clear();
    }
    
    for(int i=0;i<26;i++) if(num[i]>max) max=num[i];
    for(int i=0;i<26;i++) if(num[i]==max) cout<<(char)(i+'a');
    return 0;
}
