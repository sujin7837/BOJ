//
//  main.cpp
//  11279번 최대 힙
//
//  Created by 김수진 on 2021/07/20.
//

#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int main() {
    int n, x;
    priority_queue<int> pq;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &x);
        if(x>0) pq.push(x);
        else {
            if(pq.empty()) printf("%d\n", 0);
            else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
    }

    return 0;
}
