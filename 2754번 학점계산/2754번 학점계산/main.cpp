//
//  main.cpp
//  2754번 학점계산
//
//  Created by 김수진 on 2021/03/09.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string grade;
    float result=0.0f;
    
    cin>>grade;
    if(grade=="A+") result=4.3;
    else if(grade=="A0") result=4.0;
    else if(grade=="A-") result=3.7;
    else if(grade=="B+") result=3.3;
    else if(grade=="B0") result=3.0;
    else if(grade=="B-") result=2.7;
    else if(grade=="C+") result=2.3;
    else if(grade=="C0") result=2.0;
    else if(grade=="C-") result=1.7;
    else if(grade=="D+") result=1.3;
    else if(grade=="D0") result=1.0;
    else if(grade=="D-") result=0.7;
    else if(grade=="F") result=0.0;
    
    cout<<fixed;
    cout.precision(1);
    cout<<result<<endl;
    
    return 0;
}
