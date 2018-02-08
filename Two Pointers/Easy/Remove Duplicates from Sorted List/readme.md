# Problem  
>  Given a sorted linked list, delete all duplicates such that each element appear only once.  

> For example  
> Given 1->1->2, return 1->2.  
> Given 1->1->2->3->3, return 1->2->3.  

# Solution  

1.If there is an empty list,return it directly.  

2.ListNode l denotes the left ListNode,and ListNode r is the right one.We can compare thier value to decide their next node.  
```
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
```  
