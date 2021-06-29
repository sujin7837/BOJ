//
//  main.cpp
//  10816번 숫자 카드2
//
//  Created by 김수진 on 2021/06/28.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    int startNum, endNum, result;
    int card[500001], card2[500001];
    
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &card[i]);
    }
    sort(card, card+n);
    
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d", &card2[i]);
        startNum=lower_bound(card, card+n, card2[i])-card;
        endNum=upper_bound(card, card+n, card2[i])-card;
        result=endNum-startNum;
        printf("%d ", result);
    }

    return 0;
}
