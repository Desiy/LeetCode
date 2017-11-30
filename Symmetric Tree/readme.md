# Problem  
> Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).  
> For example, this binary tree [1,2,2,3,4,4,3] is symmetric: 

# Solution  

## Iterative Method  

1.Define two stack to save the value of the left subtree and the right subtree.First of all,put the root in them.

2.If they have th distinct construction,return false.  

3.If the left subnode is equal to the right one,we can put them in the stack,and refresh them.  

```
　　if(l&&r){  
　　　　　　　if(l->val!=r->val) return false;  
　　　　　　　sl.push(l);  
　　　　　　　sr.push(r);  
　　　　　　　l=l->left;  
　　　　　　　r=r->right;  
　　　　　}  
```

4.Otherwise,back to the stack's top,compare the other node and remove the top element.  
```
　　　　　　　l=sl.top()->right;  
　　　　　　　r=sr.top()->left;  
　　　　　　　sl.pop();  
　　　　　　　sr.pop();  
```

## Recursive Method  

Define a function to compare left treenode and right treenode rather than operating it directly.Beacuse the fuction with two parameters can traverse all the nodes.  

