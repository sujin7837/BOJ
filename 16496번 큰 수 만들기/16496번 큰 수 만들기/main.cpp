//
//  main.cpp
//  16496번 큰 수 만들기
//
//  Created by 김수진 on 2021/08/05.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

bool visit=false;

bool cmp(string a, string b) {
    string s1=a+b;
    string s2=b+a;
    return s1>s2;
}

int main() {
    int n;
    string list, s="";
    vector<string> v;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>list;
        v.push_back(list);
    }
    sort(v.begin(), v.end(), cmp);
    
    if(v[0]=="0") s='0';
    else {
        for(int i=0;i<n;i++) {
            s+=v[i];
        }
    }
    cout<<s<<endl;
    
    return 0;
}
