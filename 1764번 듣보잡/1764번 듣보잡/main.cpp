//
//  main.cpp
//  1764번 듣보잡
//
//  Created by 김수진 on 2021/07/06.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string listen[500001], see[500001];

int binary_search(int low, int high, int num) {    //이진탐색을 통해 listen 배열에 있는 사람이 see 배열에도 있는지 확인한다.
    if(low>high) return -1;    //존재하지 않으면 -1을 리턴한다.
    else {
        int mid=(low+high)/2;
        if(listen[num]==see[mid]) return mid;    //존재하면 해당 인덱스 값을 리턴한다.
        else if(listen[num]<see[mid]) return binary_search(low, mid-1, num);
        else return binary_search(mid+1, high, num);
    }
}

int main() {
    int n, m, cnt=0;
    int result[500001];
    
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>listen[i];
    for(int i=0;i<m;i++) cin>>see[i];
    sort(listen, listen+n);    //listen 배열을 정렬한다.
    sort(see, see+m);    //see 배열을 정렬한다.
    
    for(int i=0;i<n;i++) {
        if(binary_search(0, m, i)!=-1) result[cnt++]=binary_search(0, m, i);    //이진탐색을 통해 찾은 듣보잡 명단을 result에 저장한다.
    }
    cout<<cnt<<endl;    //듣보잡 수를 출력한다.
    for(int i=0;i<cnt;i++) {
        if(result[i]!=-1) cout<<see[result[i]]<<endl;    //듣보잡 명단을 사전순으로 출력한다.
    }
    return 0;
}
