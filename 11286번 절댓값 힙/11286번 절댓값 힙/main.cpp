//
//  main.cpp
//  11286번 절댓값 힙
//
//  Created by 김수진 on 2021/07/20.
//

#include <iostream>
#include <cmath>
#include <queue>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;

int main() {
    int n, x;
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> abs_pq;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &x);
        if(x!=0) {
            v.push_back(x);
            abs_pq.push(abs(x));
        }
        else {
            if(abs_pq.empty()) printf("%d\n", 0);
            else {
                auto it=find(v.begin(), v.end(), abs_pq.top());
                if(it==v.end()) {
                    printf("%d\n", abs_pq.top()*(-1));
                    it=find(v.begin(), v.end(), abs_pq.top()*(-1));
                    v.erase(it);
                }
                else {
                    auto it2=find(v.begin(), v.end(), abs_pq.top()*(-1));
                    if(it2==v.end()) {
                        printf("%d\n", abs_pq.top());
                        v.erase(it);
                    } else {
                        printf("%d\n", abs_pq.top()*(-1));
                        v.erase(it2);
                    }
                    
                }
                abs_pq.pop();
            }
        }
    }
    
    return 0;
}
