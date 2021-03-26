//
//  main.cpp
//  1436번 영화감독 숌
//
//  Created by 김수진 on 2021/03/26.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int start=665;
    int num=0;
    string s;
    
    cin>>n;
    while(start++) {
        s=to_string(start);
        //find 함수의 리턴값은 문자열의 위치(배열 번호의 위치)를 반환하기 때문에 -1이 아닌 경우에 해당 문자열이 존재한다고 할 수 있다
        if(s.find("666")!=-1) num++;
        if(num==n) {
            cout<<start<<endl;
            break;
        }
    }

    return 0;
}
