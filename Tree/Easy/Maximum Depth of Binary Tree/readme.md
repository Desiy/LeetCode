# Problem  
> Given a binary tree, find its maximum depth.  

> The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.  

#Solution  

## Recursive Method  

1.When it is a root node or a leaf node,return 0.  

2.Recursively call the function.  

	return max(1+maxDepth(root->left),1+maxDepth(root->right));  
*Everytime we call the fuction,the result was added one.*  
 