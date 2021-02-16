//
//  main.cpp
//  1149번 RGB거리
//
//  Created by 김수진 on 2021/02/16.
//

#include <iostream>
using namespace std;

int main(void) {
    int n;
    int v[1010][3];
    int p[1010][3];
    int min_value;
    
    cin>>n;
    
    for(int i=1;i<=n;i++) {
        for(int j=0;j<3;j++) cin>>v[i][j];
    }
    p[1][0]=v[1][0];
    p[1][1]=v[1][1];
    p[1][2]=v[1][2];
    
    for(int i=2;i<=n;i++) {
        p[i][0]=min(p[i-1][1], p[i-1][2])+v[i][0];
        p[i][1]=min(p[i-1][0], p[i-1][2])+v[i][1];
        p[i][2]=min(p[i-1][0], p[i-1][1])+v[i][2];
    }
    min_value=min(min(p[n][0], p[n][1]),p[n][2]);
    cout<<min_value<<endl;
    
    return 0;
}
