# Problem  
> Given an array where elements are sorted in ascending order, convert it to a height balanced BST.  

> For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.  


# Solution  

1.The middle integer of the array is the root of binary tree.  

2.The middle num of the left part of middle integer is the root of left subtree.The right part is also.  

3.Recursively call the function.  


