//
//  main.cpp
//  2212번 센서
//
//  Created by 김수진 on 2021/03/09.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    int arr[10001];
    int eachLen[10001];
    int len=0;
    
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    
    for(int i=0;i<n-1;i++) eachLen[i]=arr[i+1]-arr[i];
    sort(eachLen,eachLen+n-1);
    
    for(int i=0;i<n-k;i++) len+=eachLen[i];
    cout<<len<<endl;
    
    return 0;
}
