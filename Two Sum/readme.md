# Two Sum
## Qusetion  
Given an array of integers, return indices of the two numbers such that they add up to a specific target.  

## Solution:  

1.Define and intialize a map that include the array of intergers.  

```
　　map<int, int> m;  
　　for (int i = 0; i < nums.size(); ++i) {  
　　　　m[nums[i]] = i;  
　　　}
```

２．Target substracts nums[i],and find the difference in the map.if it succeed,return it;if not,continue.  

```
　　for (int i = 0; i < nums.size(); ++i) {  
　　　　int diff = target - nums[i];  
　　　　if (m.count(diff) && m[diff] != i) {  
　　　　　　result.push_back(i);  
　　　　　　result.push_back(m[diff]);  
　　　　　　break;  
　　　　　}  
　　　　}
```

