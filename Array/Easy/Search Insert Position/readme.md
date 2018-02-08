# Question  
>Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.  

# Solution  
1.If the target value is smaller than the first element in the vector,return 0.  
2.If the taget value is bigger than the last elemnet in the vector,return  the length of vector.  
3.Searching elements in the vector,there are two cases occuring:  
* Find one element which value is equal to target.  
* Find an element(i-1) which is smaller than target and an element(i) which is bigger than target,return i.  

```
　while(i<nums.size()){  
　　　　　　if(nums[i]==target)  
　　　　　　　　return i;  
　　　　　　else if(nums[i]>target&&nums[i-1]<target)  
　　　　　　　　return i;  
　　　　　　else ++i;                
        }  
```
