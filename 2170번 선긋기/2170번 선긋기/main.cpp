//
//  main.cpp
//  2170번 선긋기
//
//  Created by 김수진 on 2021/03/08.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int n, a, b;
    int start, end;
    int len=0;
    cin>>n;
    
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        v[i].first=a;
        v[i].second=b;
    }
    sort(v.begin(),v.end());
    start=v[0].first;
    end=v[0].second;
    len=end-start;
    for(int i=1;i<n;i++) {
        if(v[i].first>end) {
            start=v[i].first;
            end=v[i].second;
            len+=end-start;
        } else if(v[i].second>end) {
            len+=v[i].second-end;
            end=v[i].second;
        }
    }
    cout<<len<<"\n";
    
    return 0;
}
