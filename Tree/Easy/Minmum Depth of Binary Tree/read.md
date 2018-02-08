# Problem    

> Given a binary tree, find its minimum depth.  

> The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.  

# Solution  

1.If the tree is empty,the depth is zero.  

2.If node has left subnode and right subnode,recursively call the fuction to find the samaller depth.  

```
　　if(root->left&&root->right)  
　　　　return 1+min(minDepth(root->left),minDepth(root->right));
```

3.If it only has one subnode,continue call the function.  
```
　　　if(root->left||root->right){  
　　　　　　if(root->left) return 1+minDepth(root->left);  
　　　　　　if(root->right) return 1+minDepth(root->right);  
　　　　}  
```

4.If there is no subnode,it is leaf node.return 1.
