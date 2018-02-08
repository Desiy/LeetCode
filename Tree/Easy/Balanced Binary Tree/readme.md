# Problem  

> Given a binary tree, determine if it is height-balanced.  

> For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.  

# Solution  

1.Find out the height of left subtree and right right subtree.If their difference  is not more than 1,continue finding their subtree.  
```
　height_left=Height(root->left);  
　height_right=Height(root->right);  
　if(abs(height_left-height_right)<=1)  
　　　　return isBalanced(root->left)&&isBalanced(root->right);  
　else return false;  
```

2.Here is the way to find the height of tree by recursive method.  

```
　int Height(TreeNode* root){  
　　　　if(!root) return 0;  
　　　　else if(root->left&&root->right){  
　　　　　　return 1+max(Height(root->left),Height(root->right));      
　　　　}  
　　　　else if(root->left||root->right){  
　　　　　　if(root->left) return 1+Height(root->left);  
　　　　　　if(root->right) return 1+Height(root->right);  
　　　　}  
　　　　else return 1;  
                   
　　　}  
```
