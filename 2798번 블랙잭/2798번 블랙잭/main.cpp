//
//  main.cpp
//  2798번 블랙잭
//
//  Created by 김수진 on 2021/06/25.
//

#include <iostream>
using namespace std;

int main() {
    int n, m;
    int sum=0;
    int result=0;
    int cards[100];
    cin>>n>>m;
    
    for(int i=0;i<n;i++) {
        cin>>cards[i];
    }
    
    for(int i=0;i<n-2;i++) {
        for(int j=i+1;j<n-1;j++) {
            for(int k=j+1;k<n;k++) {
                sum=cards[i]+cards[j]+cards[k];
                if(sum<=m && sum>result) result=sum;
            }
        }
    }
    cout<<result<<endl;
    
    return 0;
}
