//
//  main.cpp
//  1654번 랜선 자르기
//
//  Created by 김수진 on 2021/06/29.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, k, left, right, mid;
    long long line[1000001];
    long long num, result=0;
    
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>line[i];
    }
    sort(line, line+n);
    
    left=1; right=line[n-1];
    while(left<=right) {
        num=0;
        mid=(left+right)/2;
        for(int i=0;i<n;i++) {
            num+=line[i]/mid;
        }
        if(num<k) right=mid-1;
        else {
            left=mid+1;
            result=max(mid, result);
        }
    }
    cout<<result<<endl;
        
    return 0;
}
