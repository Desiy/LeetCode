# Problem  

> Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.  

# Solution  

1.If it is leaf node,estimate whether its value is equal to sum.  

2.Otherwise,recursively call the fumction.Everytime we pass a node,substract the node's value from sum.  

		return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);  


