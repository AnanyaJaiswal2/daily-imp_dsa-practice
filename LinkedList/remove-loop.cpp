// Problem: Remove Loop in Linked List
// Approach: Floyd’s Cycle Detection + Fix loop
// Complexity: O(n), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void removeLoop(Node* head) {
        if(head==NULL || head->next==NULL) return;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(slow!=fast) return;
        slow=head;
        if(slow==fast){
            while(fast->next != slow) {
                fast = fast->next;
            }
        } else {
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
        }
        fast->next=NULL;
    }
};
