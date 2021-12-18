//
//  main.cpp
//  11497번 통나무 건너뛰기
//
//  Created by 김수진 on 2021/08/05.
//

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t, n, m;
    int diff, max=0;
    vector<int> v;
    deque<int> d;
    
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n;
        
        for(int j=0;j<n;j++) {
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        d.push_front(v[0]);
        for(int j=1;j<n;j++) {
            if(j%2==0) d.push_front(v[j]);
            else d.push_back(v[j]);
        }
        for(int j=0;j<n-1;j++) {
            diff=abs(d[j]-d[j+1]);
            if(diff>max) max=diff;
        }
        cout<<max<<endl;
        v.clear();
        d.clear();
        max=0;
    }
    
    return 0;
}
