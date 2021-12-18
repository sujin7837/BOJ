//
//  main.cpp
//  1516번 게임 개발
//
//  Created by 김수진 on 2021/09/02.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, input;
int result[501];
int count[501]={0,};
vector<int> v[501];

void make_game(int x) {
    queue<int> q;
    for(int i=0;i<v[x].size();i++) {
        int now=v[x][i];
        count[now]--;
        
    }
}

int main() {
    int time[501];
    
    
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>time[i];
        while(1) {
            cin>>input;
            if(input==-1) break;
            else {
                v[i].push_back(input);
                count[i]++;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        if(v[i].size()==0) result[i]=time[i];
        else make_game(i);
    }
    
    return 0;
}
