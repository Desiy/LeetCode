# Problem  
>Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.  

>The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.  

>You may assume that each input would have exactly one solution and you may not use the same element twice.  

	Input: numbers={2, 7, 11, 15}, target=9
	Output: index1=1, index2=2   

# Solution  

1.Because the vector is in ascending order,we can add the first integer and the last integer.  

2.If their sum is equal to target,return two indexes.Otherwise,if sum are bigger than target,substract the second index.If sum is smaller than target,add the first index.  

```
　　while(l<r){  
　　　　　if(numbers[l]+numbers[r]==target){  
　　　　　　　　vector<int> res={l+1,r+1};  
　　　　　　　　return res;  
　　　　　　}  
　　　　　else if(numbers[l]+numbers[r]>target) --r;  
　　　　　else ++l;  
　　　}  
```
