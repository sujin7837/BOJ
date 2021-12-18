//
//  main.cpp
//  1074번 Z
//
//  Created by 김수진 on 2021/07/01.
//

#include <iostream>
#include <cmath>
using namespace std;

int section(int N, int r, int c) {
    int size=1<<(N-1);
    
    if(N==0) {
        return 1;
    }
    if(r<size) {
        if(c<size) return section(N-1, r, c);
        else return size*size+section(N-1, r, c-size);
    } else {
        if(c<size) return size*size*2+section(N-1, r-size, c);
        else return size*size*3+section(N-1, r-size, c-size);
    }
}

int main() {
    int N, r, c;
    
    cin>>N>>r>>c;
    
    cout<<section(N, r, c)-1<<endl;
        
    return 0;
}
