#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* ryt;
    Node(int val){
        data=val;
        left=ryt=NULL;
    }
};

int md(Node* root,int& ans){
    if(root==NULL) return 0;
int lh=md(root->left,ans);
int rh=md(root->ryt,ans);
ans=max(ans,lh+rh);
return 1+(max(lh,rh));
}
int d(Node* root){
    int ans=0;
    md(root,ans);
    return ans;
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    // root->ryt = new Node(3);
    // root->left->left = new Node(4);
    // root->left->ryt = new Node(5);

    cout << "Diameter of Binary Tree: " << d(root) << endl;
    return 0;
}