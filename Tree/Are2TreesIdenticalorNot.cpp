#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
bool isi(Node* p1,Node* p2){
    if(p1==NULL && p2==NULL) return true;
    if (p1 == NULL || p2 == NULL) return false;
    if(p1->data!=p2->data) return false;
   return isi(p1->left,p2->left) && isi(p1->right,p2->right);
}
int main(){
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);

    
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    //root2->left->left = new Node(4);
    if(isi(root1,root2)){
         cout<<"Identical";
    }else{
        cout<<"Not Identical";
        

    }
    return 0;
}