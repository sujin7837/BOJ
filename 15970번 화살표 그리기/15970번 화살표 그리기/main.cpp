//
//  main.cpp
//  15970번 화살표 그리기
//
//  Created by 김수진 on 2021/03/26.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n;
    int a,b;
    int len, minLen;
    vector<pair<int,int>> v;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(v[i].second==v[j].second) {
                len=abs(v[i].first-v[i].first);
                minLen=min(
            }
        }
    }
    
    return 0;
}
