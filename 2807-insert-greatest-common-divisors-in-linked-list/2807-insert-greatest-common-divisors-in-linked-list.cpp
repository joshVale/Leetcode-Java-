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
        int gcd(int a,int b){
            if(a==0){
                return b;
            }
            return gcd(b%a,a);
        }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr!=nullptr && curr->next!=nullptr){
            int n = gcd(curr->val,curr->next->val);
            ListNode* newNode = new ListNode(n,curr->next);
            curr->next=newNode;

            curr=curr->next;
            curr= newNode->next;
        }
        return head;
    }
};