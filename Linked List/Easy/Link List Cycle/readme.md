# Problem
> Given a linked list, determine if it has a cycle in it.  

>Follow up:  
>Can you solve it without using extra space?  

# Solution  

1.Define  ListNodes:one of them points to head,the other one points to head->next->next.

2.If there is a cycle,two ListNode would be equal.  

3.Otherwise,replace them with node->next and node->next->next until they are NULL.  
