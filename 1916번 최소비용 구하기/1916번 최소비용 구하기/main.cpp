//
//  main.cpp
//  1916번 최소비용 구하기
//
//  Created by 김수진 on 2021/04/03.
//

#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;

int n;
int dist[1001];
bool visit[1001]={false, };
vector<pair<int,int>> v[100001];

int smallestNode() {
    int minValue=INF;
    int index=0;
    
    for(int i=1;i<=n;i++) {
        if(!visit[i] && (dist[i]<minValue)) {
            minValue=dist[i];
            index=i;
        }
    }
    return index;
}

int dijstra(int node1, int node2) {
    visit[node1]=true;
    dist[node1]=0;
    
    for(int i=0;i<v[node1].size();i++) {
        int idx=v[node1][i].first;
        //같은 노선을 지나가는 버스인데 비용이 다른 경우, 비용이 더 적은 것을 저장
        if(dist[idx]!=INF) dist[idx]=min(dist[idx], v[node1][i].second);
        else dist[idx]=v[node1][i].second;
    }
    
    for(int i=0;i<n-1;i++) {
        int now=smallestNode();
        if(now==node2) return dist[now];
        else {
            visit[now]=true;
            
            for(int j=0;j<v[now].size();j++) {
                int c=dist[now]+v[now][j].second;
                if(c<dist[v[now][j].first]) dist[v[now][j].first]=c;
            }
        }
    }
    return dist[node2];
}

int main() {
    int m;
    int start, end, cost;
    int startCity, endCity;
    
    cin>>n>>m;
    for(int i=0;i<m;i++) {
        cin>>start>>end>>cost;
        v[start].push_back(make_pair(end, cost));
    }
    cin>>startCity>>endCity;
    
    fill(dist,dist+1001,INF);
    cout<<dijstra(startCity,endCity)<<endl;
    
    return 0;
}
