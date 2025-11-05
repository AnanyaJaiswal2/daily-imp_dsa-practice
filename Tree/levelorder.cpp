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
vector<vector<int>> levelorder(Node* root){
vector<vector<int>> ans;
if(root==NULL) return ans;
queue<Node*> q;
q.push(root);
while(!q.empty()){
    int n=q.size();
    vector<int> l;
    for(int i=0;i<n;i++){
        Node* node=q.front();
        q.pop();
        l.push_back(node->data);
        if(node->left!=NULL) q.push(node->left);
       if(node->right!=NULL) q.push(node->right);
    }
    ans.push_back(l);
    }
    return ans;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<vector<int>> result = levelorder(root);

    for (auto level : result) {
        for (auto val : level) cout << val << " ";
        cout << endl;
    }

    return 0;
}