# Problem  

> Write a program to find the node at which the intersection of two singly linked lists begins.  

> For example, the following two linked lists:  

	A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
	B:     b1 → b2 → b3

Notes:

    If the two linked lists have no intersection at all, return null.
    The linked lists must retain their original structure after the function returns.
    You may assume there are no cycles anywhere in the entire linked structure.
    Your code should preferably run in O(n) time and use only O(1) memory.

# Solution  

1.Since two lists may have different length,we can get their difference between their length.  

2.If List A has more elements,start to compare with B from A[difference].  
```
	　　a=headA,b=headB;  
	　　if(la>lb){  
	　　　　while(diff>0){a=a->next;--diff;}  
	　　　}  
	　　else if(lb>la) {  
	　　　　while(diff>0) {b=b->next;--diff;}  
	　　　}  
```


