//
//  main.cpp
//  1920번 수 찾기
//
//  Created by 김수진 on 2021/06/28.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m;
    int input;
    int findNum[100001];
    vector<int> num;
        
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &input);
        num.push_back(input);
    }
    sort(num.begin(), num.end());
    
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d", &findNum[i]);
        if(binary_search(num.begin(), num.end(), findNum[i])) printf("%d\n", 1);
        else printf("%d\n", 0);
    }
    return 0;
}
