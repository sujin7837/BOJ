//
//  main.cpp
//  1946번 신입사원
//
//  Created by 김수진 on 2021/02/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int t;
    int n, num, now;
    int grade, rank;
    
    cin>>t;
    
    for(int i=0;i<t;i++) {
        vector<pair<int,int>> v;
        cin>>n;
        num=n;
        for(int j=0;j<n;j++) {
            cin>>grade>>rank;
            v.push_back(make_pair(grade, rank));
        }
        sort(v.begin(),v.end());
        now=v[0].second;
        
        for(int j=1;j<n;j++) {
            if(v[j].second>now) num--;
            else now=v[j].second;
        }
        cout<<num<<endl;
    }
    return 0;
}
