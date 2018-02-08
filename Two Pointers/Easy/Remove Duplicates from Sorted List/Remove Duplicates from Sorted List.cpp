/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode *l=head,*r = head->next;
        while (r) {
            if (l->val == r->val) {
                r = r->next;
                l->next=r;                
            }
            else {
                l=r;
                r = r->next;             
            }
	    }
        
	    return head;
    }
};