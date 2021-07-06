//
//  main.cpp
//  1620번 나는야 포켓몬 마스터 이다솜
//
//  Created by 김수진 on 2021/07/05.
//

#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    int n, m;
    string input;
    char answer[21];
    map<string, int> mp;
    string s[100001];
    
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {    //n개의 포켓몬의 이름과 입력 번호를 {포켓몬 이름, 입력 번호} 쌍으로 갖는 map 구조의 mp에 저장한다.
        cin>>input;
        mp.insert(make_pair(input, i+1));
        s[i+1]=input;    //string 배열에 포켓몬의 이름을 저장한다.
    }
    for(int i=0;i<m;i++) {
        scanf("%s", answer);    //맞춰야하는 문제를 char 형태로 입력받는다.
        if(answer[0]<'0' || answer[0]>'9') {  //입력받은 값이 문자인 경우
            printf("%d\n", mp[answer]);    //mp에서 해당 문자에 대응하는 입력 번호를 찾아서 출력한다.
        } else {    //입력받은 값이 숫자인 경우
            cout<<s[atoi(answer)];    //s에서 해당 숫자에 대응하는 포켓몬 이름을 출력한다.
            printf("\n");
        }
    }
    return 0;
}
