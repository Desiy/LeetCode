
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head||!(head->next))
            return false;
        ListNode*l=head,*r=head->next->next;
        while(r&&r->next){
            if(l==r)
                return true;
            else {
                l=l->next;
                r=r->next->next;
            }
        }
        return false;
    }
};