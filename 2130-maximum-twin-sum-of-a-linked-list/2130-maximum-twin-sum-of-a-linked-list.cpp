/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {

        
        ListNode*slow=head;
        ListNode*fast=head;
        int sum=0;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*curr = slow;
        ListNode*prev = nullptr;
        while(curr!=nullptr){
            ListNode* nextnode = curr->next;
            curr->next=prev;
            prev =  curr;
            curr=nextnode;
        }

        ListNode* left = head;
        ListNode* right = prev;
        
        while(right!=nullptr){
            sum = max(sum,left->val+right->val);
            left=left->next;
            right=right->next;

        }

        return sum;


    }
};