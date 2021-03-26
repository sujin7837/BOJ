//
//  main.cpp
//  1145번 적어도 대부분의 배수
//
//  Created by 김수진 on 2021/03/26.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n[5];
    int num=0;
    vector<int> v[101];
    
    for(int i=0;i<5;i++) cin>>n[i];
    int start=1;
    while(1) {
        for(int i=0;i<5;i++) {
            if(start%n[i]==0) num++;
        }
        if(num>=3) break;
        else {
            num=0;
            start++;
        }
    }
    cout<<start<<endl;
    
    return 0;
}
