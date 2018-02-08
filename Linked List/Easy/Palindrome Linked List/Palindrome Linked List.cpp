
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next) return true;
       ListNode *slow=head,*fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* pre=NULL,*cur=slow->next;
        while(cur){
            ListNode* temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;         
        }
        cur=pre;
        while(cur&&head){
            if(cur->val!=head->val) return false;
                cur=cur->next;
                head=head->next;
        }
        return true;
    }
};