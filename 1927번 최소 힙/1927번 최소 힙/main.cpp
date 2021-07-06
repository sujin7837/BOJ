//
//  main.cpp
//  1927번 최소 힙
//
//  Created by 김수진 on 2021/07/06.
//

#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int main() {
    int n, x;
    int cnt=0;
    priority_queue<int, vector<int>, greater<int>> pq;    //최소 힙 구현을 위해 우선순위 큐를 오름차순으로 만들어준다.
    
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &x);
        if(x>0) pq.push(x);    //입력받은 x가 자연수인 경우, 우선순위 큐 pq에 삽입한다.
        else if(x==0) {    //입력받은 x가 0인 경우,
            cnt++;    //0의 개수를 1만큼 증가시키고
            if(cnt>0) {    //cnt 값이 양수인 경우,
                if(pq.empty()) printf("%d\n", 0);    //1. 우선순위 큐가 비어있으면 0을 출력한다.
                else {    //2. 우선순위 큐가 비어있지 않으면 첫번째 원소를 출력하고 우선순위 큐에서 해당 값을 제거한다.
                    printf("%d\n", pq.top());
                    pq.pop();
                }
                cnt--;    //출력을 한 번 해주었으므로 cnt 값을 1만큼 감소시킨다.
            }
        }
    }
    return 0;
}
