# Question  
>Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.  
# Solution  
1.If ListNode l1 or ListNode l2 is null,return the other one,which means no need to merge.  

2.Let the ListNode head be  the head of the list.If l1->val is smaller,head is l1,otherwise,l2.  
  ```
　　if (l1->val < l2->val) {  
　　　　head = l1;  
　　　　l1 = l1->next;  
　　}  
　　else {  
　　　head = l2;  
　　　l2 = l2->next;  
　　}
	```

3.Compare l1->val with l2->val:  
  ```
　ListNode *t = head;  
　　while (l1&&l2) {  
　　　if (l1->val < l2->val) {  
　　　　t->next = l1;  
　　　　l1 = l1->next;  
　　　}  
　　　else {  
　　　　t->next = l2;  
　　　　l2 = l2->next;  
　　　}  
　　　t = t->next;  
　　}  
  ```

 4.Any of two lists has more elements than the other one.  
```
　if (l1) t->next = l1;  
　　　else t->next = l2;  
```
