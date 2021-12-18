//
//  main.cpp
//  14888번 연산자 끼워넣기
//
//  Created by 김수진 on 2021/03/24.
//

#include <iostream>
#include <cmath>
using namespace std;

int n;
int maxValue=-1000000001;
int minValue=1000000001;
int a[101];
int operation[4]={0,};

void operating(int result, int idx) {
    if(idx==n) {
        if(result>maxValue) maxValue=result;
        if(result<minValue) minValue=result;
    }
    else {
        for(int i=0;i<4;i++) {
            if(operation[i]>0) {
                operation[i]--;
                if(i==0) operating(result+a[idx], idx+1);
                else if(i==1) operating(result-a[idx], idx+1);
                else if(i==2) operating(result*a[idx], idx+1);
                else if(i==3) operating(result/a[idx], idx+1);
                operation[i]++;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<4;i++) cin>>operation[i];
    
    operating(a[0], 1);
    
    cout<<maxValue<<endl<<minValue<<endl;
    
    return 0;
}
