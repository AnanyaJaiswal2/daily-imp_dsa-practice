// Problem: Check if Linked List is Palindrome
// Approach: Reverse 2nd Half + Compare halves
// Complexity: O(n), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    Node* reverseList(Node* head){
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL){
            Node* first=temp->next;
            temp->next=prev;
            prev=temp;
            temp=first;
        }
        return prev;
    }

    bool isPalindrome(Node *head) {
        if(!head || !head->next) return true;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* newhead=reverseList(slow);
        Node* temp1=newhead;
        Node* temp=head;
        while(temp1!=NULL){
            if(temp->data!=temp1->data) return false;
            temp=temp->next;
            temp1=temp1->next;
        }
        return true;
    }
};
