//
//  main.cpp
//  2941번 크로아티아 알파벳
//
//  Created by 김수진 on 2021/03/12.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int num[36]={0,};
    int result=0;
    
    cin>>s;
    for(int i=0;i<s.length();i++) {
        switch (s[i]) {
            case 'c':
                if(i+1<s.length()) {
                    if(s[i+1]=='=') {
                        num[26]++;
                        i++;
                    }
                    else if(s[i+1]=='-') {
                        num[27]++;
                        i++;
                    }
                    else num[s[i]-'a']++;
                }
                else num[s[i]-'a']++;
                break;
                
            case 'd':
                if(i+2<s.length()) {
                    if(s[i+1]=='z') {
                        if(s[i+2]=='=') {
                            num[28]++;
                            i+=2;
                        }
                        else num[s[i]-'a']++;
                    }
                    else if(s[i+1]=='-') {
                        num[29]++;
                        i++;
                    }
                    else num[s[i]-'a']++;
                }
                else if(i+1<s.length()) {
                    if(s[i+1]=='-') {
                        num[29]++;
                        i++;
                    }
                    else num[s[i]-'a']++;
                }
                else num[s[i]-'a']++;
                break;
                
            case 'l':
                if(i+1<s.length()) {
                    if(s[i+1]=='j') {
                        num[30]++;
                        i++;
                    }
                    else num[s[i]-'a']++;
                }
                else num[s[i]-'a']++;
                break;
                
            case 'n':
                if(i+1<s.length()) {
                    if(s[i+1]=='j') {
                        num[31]++;
                        i++;
                    }
                    else num[s[i]-'a']++;
                }
                else num[s[i]-'a']++;
                break;
                
            case 's':
                if(i+1<s.length()) {
                    if(s[i+1]=='=') {
                        num[32]++;
                        i++;
                    }
                    else num[s[i]-'a']++;
                }
                else num[s[i]-'a']++;
                break;
                
            case 'z':
                if(i+1<s.length()) {
                    if(s[i+1]=='=') {
                        num[33]++;
                        i++;
                    }
                    else num[s[i]-'a']++;
                }
                else num[s[i]-'a']++;
                break;
            
            case '-':
                num[34]++;
                break;
                
            case '=':
                num[35]++;
                break;
                
            default:
                num[s[i]-'a']++;
                break;
        }
    }
    for(int i=0;i<36;i++) result+=num[i];
    cout<<result<<endl;
    
    return 0;
}
