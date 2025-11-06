#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Forward declaration
bool sym(Node* p1, Node* p2);

bool isS(Node* root) {
    if (root == NULL) return true;
    return sym(root->left, root->right);
}

bool sym(Node* p1, Node* p2) {
    if (p1 == NULL && p2 == NULL) return true;
    if (p1 == NULL || p2 == NULL) return false;
    if (p1->data != p2->data) return false;
    
    return sym(p1->left, p2->right) && sym(p1->right, p2->left);
}

int main() {
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    

    if (isS(root))
        cout << "Tree is symmetric" << endl;
    else
        cout << "Tree is not symmetric" << endl;

    return 0;
}
