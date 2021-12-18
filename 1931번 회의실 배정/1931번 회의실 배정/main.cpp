//
//  main.cpp
//  1931번 회의실 배정
//
//  Created by 김수진 on 2021/02/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

bool comp(pair<int, int> v1, pair<int, int> v2) {
    if(v1.second==v2.second) {
        return v1.first<v2.first;
    } else return v1.second<v2.second;
}

int main(void) {
    int n;
    int first, second;
    int a,b;
    int num=1;
    
    cin>>n;
    
    for(int i=0;i<n;i++) {
        cin>>first>>second;
        v.push_back(make_pair(first, second));
    }
    sort(v.begin(), v.end(), comp);
    
    b=v[0].second;
    a=v[0].first;
    
    for(int i=1;i<n;i++) {
        if(v[i].first>=b) {
            a=b;
            b=v[i].second;
            num++;
        }
    }
    cout<<num<<endl;
    
    return 0;
}
