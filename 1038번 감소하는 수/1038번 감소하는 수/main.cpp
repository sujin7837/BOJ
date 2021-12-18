//
//  main.cpp
//  1038번 감소하는 수
//
//  Created by 김수진 on 2021/08/19.
//

#include <iostream>
#include <string>
using namespace  std;

int main() {
    int n;
    string s;
    int cnt=0;
    int now;
    
    cin>>n;
    if(n<10) cout<<n<<endl;
    else {
        cnt=10;
        for(int i=10;i<n;i++) {
            s=to_string(i);
            for(int j=0;j<s.length()-1;j++) {
                if(s[j]<s[j+1]) break;
            }
            if(now=s.length()-1) {
                cnt++;
                if(cnt==n) break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
