//
//  main.cpp
//  1991번 트리 순회
//
//  Created by 김수진 on 2021/03/18.
//

#include <iostream>
using namespace std;

char tree[27][2];

void preorder(char root) {
    if(root!='.') {
        cout<<root;
        preorder(tree[root][0]);
        preorder(tree[root][1]);
    }
}

void inorder(char root) {
    if(root!='.') {
        inorder(tree[root][0]);
        cout<<root;
        inorder(tree[root][1]);
    }
}

void postorder(char root) {
    if(root!='.') {
        postorder(tree[root][0]);
        postorder(tree[root][1]);
        cout<<root;
    }
}

int main() {
    int n;
    char node, left, right;
    
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>node>>left>>right;
        tree[node][0]=left;
        tree[node][1]=right;
    }
    preorder('A');
    cout<<endl;
    inorder('A');
    cout<<endl;
    postorder('A');
    cout<<endl;
    
    return 0;
}
