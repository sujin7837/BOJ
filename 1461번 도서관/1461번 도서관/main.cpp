//
//  main.cpp
//  1461번 도서관
//
//  Created by 김수진 on 2021/08/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m, book, now=0;
    int vR, vL;
    int answer=0;
    bool maxB, minB;
    bool visit[10001]={false,};
    vector<int> vLeft;
    vector<int> vRight;
    
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>book;
        if(book>=0) vRight.push_back(book);
        else vLeft.push_back(book);
    }
    vR=vRight.size(); vL=vLeft.size();
    sort(vRight.begin(), vRight.end());
    sort(vLeft.begin(), vLeft.end());
    
    // 절댓값 최대
    // 절댓값 최소
    if(vR==0) {
        if(vL==0) return 0;
        else {
            maxB=0;
            answer+=abs(vLeft[0]);
            minB=0;
        }
    } else {
        if(vL==0) {
            maxB=1;
            answer+=vRight[vR-1];
            minB=1;
        }
        else {
            if(abs(vLeft[0])>vRight[vR-1]) {
                maxB=0;
                answer+=abs(vLeft[0]);
            }
            else {
                maxB=1;
                answer+=vRight[vR-1];
            }
            if(abs(vLeft[vL-1])<vRight[0]) minB=0;
            else minB=1;
        }
    }
    
    while(now<vL) {
        if(maxB==0) {
            now+=m;
            if(now<vL) answer+=abs(vLeft[now])*2;
            else break;
        } else {
            answer+=abs(vLeft[now])*2;
            now+=m;
        }
    }
    now=vR-1;
    while (now>=0) {
        if(maxB==1) {
            now-=m;
            if(now>=0) answer+=vRight[now]*2;
            else break;
        } else {
            answer+=vRight[now]*2;
            now-=m;
        }
    }
    cout<<answer<<endl;
    
    return 0;
}
