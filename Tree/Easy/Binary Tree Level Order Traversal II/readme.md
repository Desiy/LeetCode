# Problem  
> Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).  

> For example:  
> Given binary tree [3,9,20,null,null,15,7]  
> return its bottom-up level order traversal as:[[15,7],[9,20],[3]]  

# Solution  

1.Construct a queue for putting same layer nodes and put the root firstly.   

2.Left node's value is at the front of queue,and we put its value in the vector-v,then remove it from queue.Right right node is the same.Finally,put the vector-"v" as a element in the vector vec.    

```
　while(!q.empty()){  
　　　　　　vector<int> v;   
　　　　　　int si=q.size();                        
　　　　　　for(int index=0;index<si;++index){  
　　　　　　　　TreeNode* p=q.front();  
　　　　　　　　q.pop();  
　　　　　　　　v.push_back(p->val);  
　　　　　　　　if(p->left) q.push(p->left);  
　　　　　　　　if(p->right) q.push(p->right);  
                
　　　　　　} 
  vec.push_back(v);  
```

3.Reverse the vector.  