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
        vector<int>tmp;
        ListNode* curr = head;
        while(curr!=nullptr){
            tmp.push_back(curr->val);
            curr=curr->next;
        }

        int r=0,l=tmp.size()-1;
        int max=0;
        while(r<=l){
            int sum = tmp[r]+tmp[l];
            if(sum>max){
                max=sum;
            }
            r++;
            l--;
        }
        return max;
        
    }
};