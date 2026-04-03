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
    int getDecimalValue(ListNode* head) {
        ListNode* current = head;
        string bin ="";
        while(current!=nullptr){
            string t = to_string(current->val);
            bin+=t;
            current = current->next;
        }
        int ans=0;
        int tmp =1;
        for(int i = bin.size()-1;i>=0;i--){
            if(bin[i]=='1'){
                ans+=tmp;
            }
            tmp=tmp*2;
        }
    return ans;
    }
};