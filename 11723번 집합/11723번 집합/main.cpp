//
//  main.cpp
//  11723번 집합
//
//  Created by 김수진 on 2021/07/21.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int m, num;
    bool checkNum[21];
    string s;

    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>s;
        if(s=="all") {
            memset(checkNum, true, sizeof(checkNum));
        } else if(s=="empty") {
            memset(checkNum, false, sizeof(checkNum));
        } else {
            cin>>num;
            if(s=="add") {
                checkNum[num]=true;
            } else if(s=="remove"){
                checkNum[num]=false;
            } else if(s=="check") {
                checkNum[num]==true ? puts("1"):puts("0");
            } else if(s=="toggle") {
                checkNum[num]==true ? checkNum[num]=false : checkNum[num]=true;
            }
        }
    }
    return 0;
}

