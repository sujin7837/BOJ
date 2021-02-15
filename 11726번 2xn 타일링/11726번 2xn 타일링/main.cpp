//
//  main.cpp
//  11726번 2xn 타일링
//
//  Created by 김수진 on 2021/02/15.
//

#include <iostream>
using namespace std;

int main(void) {
    int n;
    int tile[2000]={0,};
    
    cin>>n;
    tile[1]=1;
    tile[2]=2;
    for(int i=3;i<=n;i++) {
        tile[i]=(tile[i-1]+tile[i-2])%10007;
    }
    
    cout<<tile[n]<<endl;
    
    return 0;
}
