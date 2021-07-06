//
//  main.cpp
//  1107번 리모컨
//
//  Created by 김수진 on 2021/07/06.
//

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#define INF 987654321
using namespace std;

int main() {
    string n;
    int m, len, result=0;
    int num, minNum=INF;
    bool broken[11]={false, };
    
    cin>>n>>m;
    len=n.length();
    if(m==0) {
        result=min(len, abs(stoi(n)-100));
        cout<<result<<endl;
    } else {
        for(int i=0;i<m;i++) {
            cin>>num;
            broken[num]=true;
        }
        result=abs(stoi(n)-100);
        for(int i=0;i<INF;i++) {
            if(!broken[i]) {
                string s=to_string(i);
                minNum=abs(stoi(n)-i);
                minNum+=s.length();
                minNum=min(result, minNum);
            }
        }
        cout<<minNum<<endl;
    }
    
    return 0;
}
