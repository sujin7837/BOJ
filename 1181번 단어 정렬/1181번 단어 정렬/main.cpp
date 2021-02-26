//
//  main.cpp
//  1181번 단어 정렬
//
//  Created by 김수진 on 2021/02/26.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
    if(a.length()!=b.length()) return a.length()<b.length();
    else return a<b;
}

int main() {
    int n;
    string s[50001];
    
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++) getline(cin, s[i]);
    sort(s,s+n,comp);
    
    cout<<s[0]<<endl;
    for(int i=1;i<n;i++) {
        if(s[i-1]!=s[i]) cout<<s[i]<<endl;
    }
    
    return 0;
}
