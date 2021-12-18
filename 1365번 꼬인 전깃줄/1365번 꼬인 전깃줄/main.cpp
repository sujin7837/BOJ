//
//  main.cpp
//  1365번 꼬인 전깃줄
//
//  Created by 김수진 on 2021/09/02.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, num;
    int idx;
    vector<int> v;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        if(v.empty()||v.back()<num) v.push_back(num);
        else {
            idx=lower_bound(v.begin(), v.end(), num)-v.begin();
            v[idx]=num;
        }
    }
    cout<<n-v.size()<<endl;
    
    return 0;
}
