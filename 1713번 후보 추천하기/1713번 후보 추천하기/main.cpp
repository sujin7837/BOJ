//
//  main.cpp
//  1713번 후보 추천하기
//
//  Created by 김수진 on 2021/08/23.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a , pair<int, int> b) {
    return a.first<b.first;
}

int main() {
    int n, m, input;
    int rm;
    int student[101]={0,};
    vector<int> v;
    vector<pair<int, int>> v_num;
    
    memset(student, 0, sizeof(student));
    cin>>n>>m;
//    if(n>m) {
//        for(int i=0;i<m;i++) {
//            cin>>input;
//            v.push_back(input);
//        }
//        sort(v.begin(), v.end());
//        for(int i=0;i<m;i++) cout<<v[i]<<" ";
//    } else {
        for(int i=0;i<m;i++) {
            cin>>input;
            
            student[input]++;
            if(v.size()<n) {
                auto it=find(v.begin(), v.end(), input);
                if(it!=v.end()) {
//                    cout<<it-v.begin()<<endl;
//                    for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
                    v.push_back(v[it-v.begin()]);
                    it=v.erase(it);
                    
                }
                else v.push_back(input);
            } else {
                auto it=find(v.begin(), v.end(), input);
                if(it!=v.end()) {
                    v.push_back(v[it-v.begin()]);
                    it=v.erase(it);
                } else {
                    for(int j=0;j<v.size();j++) {
                        v_num.push_back({student[v[j]], v[j]});
    //                    cout<<j<<": "<<v_num[j].second<<" ";
                    }
    //                cout<<endl;
                    sort(v_num.begin(), v_num.end(), cmp);
                    
                    
    //                for(int j=0;j<v_num.size();j++) cout<<j<<"번째 "<<v_num[j].first<<" "<<v_num[j].second<<endl;
    //
                    
                    rm=v_num[0].second;
                    auto it2=find(v.begin(), v.end(), rm);
                    v.erase(it2);
                    student[it2-v.begin()]--;
                    v.push_back(input);
                    v_num.clear();
                }
            }
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//    }
    return 0;
}
