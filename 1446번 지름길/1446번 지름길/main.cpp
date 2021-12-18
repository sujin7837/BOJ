//
//  main.cpp
//  1446번 지름길
//
//  Created by 김수진 on 2021/04/02.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct shortCut {
    int start;
    int end;
    int value;
};

int main() {
    int n,d;
    shortCut tmp;
    shortCut s[10001];
    int dist[10001]={0,};
    int now=0;
    int idx=0;
    
    cin>>n>>d;
    for(int i=0;i<n;i++) {
        cin>>tmp.start>>tmp.end>>tmp.value;
        s[i]=tmp;
    }
    
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(s[i].start>s[j].start) {
                tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
        }
    }
    
    while(now<=d) {
        if(s[idx].start==now) {
            if(s[idx].end<=d) {
                if(dist[s[idx].end]!=0) dist[s[idx].end]=min(dist[s[idx].end], dist[now]+s[idx].value);
                else dist[s[idx].end]=dist[now]+s[idx].value;
            }
            idx++;
        } else {
            if(dist[now+1]!=0) dist[now+1]=min(dist[now+1], dist[now]+1);
            else dist[now+1]=dist[now]+1;
            now++;
        }
    }
    
    cout<<dist[d]<<endl;
    
    return 0;
}
