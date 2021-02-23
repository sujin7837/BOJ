//
//  main.cpp
//  11047번 동전 0
//
//  Created by 김수진 on 2021/02/23.
//

#include <iostream>
using namespace std;

int main(void) {
    int n, k;
    int arr[11];
    int num=0;
    
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=n-1;k>0;) {
        if(k>=arr[i]) {
            num++;
            k-=arr[i];
        }
        if(k<arr[i]) i--;
    }
    cout<<num<<endl;
    
    return 0;
}
