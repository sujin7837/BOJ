//
//  main.cpp
//  11203번 나무 위의 숫자
//
//  Created by 김수진 on 2021/03/18.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int findRoot(int inputH) {
    return pow(2,inputH+1)-1;
}

int main() {
    int h, root;
    int bf=1;
    string str="";
    
    cin>>h;
    root=findRoot(h);
    
    cin>>str;
    if(str=="") cout<<root<<endl;
    else {
        for(int i=0;i<str.length();i++) {
            if(str[i]=='L') bf*=2;
            else if(str[i]=='R') bf=bf*2+1;
        }
        cout<<root+1-bf<<endl;
    }
    return 0;
}
