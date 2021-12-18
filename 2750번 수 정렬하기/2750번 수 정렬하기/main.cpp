//
//  main.cpp
//  2750번 수 정렬하기
//
//  Created by 김수진 on 2021/02/25.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[1001];
    
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
    
    return 0;
}
