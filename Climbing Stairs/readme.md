# Question  

> You are climbing a stair case. It takes n steps to reach to the top.  

> Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?  

*Note: Given n will be a positive integer.*  

## Example  

> Input: 2  
> Output:  2  
> Explanation:  There are two ways to climb to the top.  

> 1. 1 step + 1 step  
> 2. 2 steps   

# Solution  

1.
| n | ways |
|---|------|
| 1 | 1    |
| 2 | 2    |
| 3 | 3    |
| 4 | 5    |
| 5 | 8    |  
From the above table,if we know the number ways of the [n-1] and [n-2],the total ways to get to the [n] is [n-1] + [n-2].  

2.Construct a vector to store the solutions of each number n.  

```
　vector<int> nums;  
　nums.push_back(1);  
　nums.push_back(2);  
　for(int i=2;i<n;++i){  
　　　　　nums.push_back(0);  
　　　　　nums[i]=nums[i-1]+nums[i-2];  
　　　　}  
```
