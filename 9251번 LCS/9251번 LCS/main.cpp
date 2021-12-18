//
//  main.cpp
//  9251번 LCS
//
//  Created by 김수진 on 2021/03/18.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string c1;
    string c2;
    int len1, len2;
    int len[1001][1001]={0,};
    
    cin>>c1>>c2;
    len1=c1.length();
    len2=c2.length();
    
    for(int i=1;i<=len1;i++) {
        for(int j=1;j<=len2;j++) {
            if(c1[i-1]==c2[j-1]) len[i][j]=len[i-1][j-1]+1;
            else len[i][j]=max(len[i][j-1],len[i-1][j]);
        }
    }
    cout<<len[len1][len2]<<endl;
        
    return 0;
}
