# Problem  
Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.  

>According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”  

	        _______6______
	       /              \
	    ___2__          ___8__
	   /      \        /      \
	   0      _4       7       9
	         /  \
	         3   5

# Solution  

## Binary Search Tree

A binary search tree is a rooted binary tree, whose internal nodes each store a key (and optionally, an associated value) and each have two distinguished sub-trees, commonly denoted left and right. The tree additionally satisfies the binary search property, which states that the key in each node must be greater than or equal to any key stored in the left sub-tree, and less than or equal to any key stored in the right sub-tree  

1.If the value of root is between p and q,their "Lowest Common Ancestor" must be the root.  

2.If the value of root is both smaller than p and q,then search the right subtree.  

3.Otherwise,search the left subtree.  
