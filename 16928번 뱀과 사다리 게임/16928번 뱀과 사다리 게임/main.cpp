//
//  main.cpp
//  16928번 뱀과 사다리 게임
//
//  Created by 김수진 on 2021/07/22.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m,y,v;
    int x[100][100];
    int u[100][100];
    
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>y>>v;
        x[y][v]=1;
    }
    for(int i=0;i<m;i++) {
        cin>>y>>v;
        u[y][v]=1;
    }
    
    return 0;
}
