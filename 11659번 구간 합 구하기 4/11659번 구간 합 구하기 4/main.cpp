//
//  main.cpp
//  11659번 구간 합 구하기 4
//
//  Created by 김수진 on 2021/07/21.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n, m;
    int num[100001];
    int span[100001][2];
    int totalSum[100001]={0,};
    int sum=0;
    
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &num[i]);
        if(i==0) totalSum[i]=num[i];
        else totalSum[i]=totalSum[i-1]+num[i];
    }
    for(int i=0;i<m;i++) {
        scanf("%d %d", &span[i][0], &span[i][1]);
        if(span[i][0]==0) sum=totalSum[span[i][1]-1];
        else sum=totalSum[span[i][1]-1]-totalSum[span[i][0]-2];
        printf("%d\n", sum);
    }
    return 0;
}
