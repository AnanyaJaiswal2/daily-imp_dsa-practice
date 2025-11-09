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
void morrisInorder(Node* root){
    if(root==NULL) return;
    Node* curr=root;
    while(curr!=NULL){
     if(curr->left==NULL){
        cout<<curr->data<<" ";
        curr=curr->ryt;

    }else{
        Node* prev=curr->left;
        while(prev->ryt!=NULL && prev->ryt!=curr){
            prev=prev->ryt;
        }if(prev->ryt==NULL){
            prev->ryt=curr;
            curr=curr->left;
        }else{
            prev->ryt=NULL;
            cout<<curr->data<<" ";
            curr=curr->ryt;
        }
    }
}

}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->ryt = new Node(3);
    root->left->left = new Node(4);
    root->left->ryt = new Node(5);

    cout << "Inorder Traversal using Morris: ";
    morrisInorder(root);
    return 0;
}    
