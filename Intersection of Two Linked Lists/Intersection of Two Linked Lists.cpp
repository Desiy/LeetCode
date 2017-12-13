struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {} 
 };
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a=headA,*b=headB;
        if(a==NULL||b==NULL) return NULL;
        int la=0,lb=0;
        while(a) { a=a->next; ++la;}
        while(b) { b=b->next; ++lb;}
        int diff=fabs(la-lb);
        a=headA,b=headB;
        if(la>lb){
            while(diff>0){a=a->next;--diff;}
        }
        else if(lb>la) {
            while(diff>0) {b=b->next;--diff;}
        }
        while(a&&b&&a!=b){
            a=a->next;
            b=b->next;
        }
        return a;
    }
};