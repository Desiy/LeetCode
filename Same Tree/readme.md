# Problem  
>  Given two binary trees, write a function to check if they are the same or not.  

> Two binary trees are considered the same if they are structurally identical and the nodes have the same value.  

# Solutiom  

1.Once one of two binary tree is NULL:  

		 if(p==NULL||q==NULL) return (p==q);

2.We can compare their value,and recursively calls the function for their left and right subtree.

```
　　　　TreeNode* tree1=p,*tree2=q;  
　　　　if (tree1->val == tree2->val)   
　　　　　　　return (isSameTree(tree1->left,tree2->left)&&isSameTree(  tree1->right,tree2->right));  
　　　　else return false;  
```
