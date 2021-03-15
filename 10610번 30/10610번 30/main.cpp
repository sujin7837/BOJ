//
//  main.cpp
//  10610번 30
//
//  Created by 김수진 on 2021/03/12.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    int n[100001];
    int numOfZero=0;
    int sum=0;
    
    cin>>s;
    for(int i=0;i<s.length();i++) {
        n[i]=s[i]-'0';
        sum+=n[i];
        if(n[i]==0) numOfZero++;
    }
    
    if(sum%3!=0 || numOfZero==0) cout<<-1<<endl;
    
    else {
        sort(n,n+s.length());
        for(int i=s.length()-1;i>=0;i--) cout<<n[i];
    }
    
    return 0;
}
