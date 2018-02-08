# Question  
> Find the contiguous subarray within an array (containing at least one number) which has the largest sum.  

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],  
the contiguous subarray [4,-1,2,1] has the largest sum = 6.  

# Solution  
1.When the vector is empty ,return 0.And when it only has one element,return that element.  
2.If there are all negative integers in the vector,return the maximum one.
```
　int sum=nums[0],maxsum=nums[0],i=0;         
　　　　　　while(i<nums.size()&&nums[i]<=0){             
　　　　　　　　if(nums[i]>maxsum)  
　　　　　　　　　　maxsum=nums[i];  
　　　　　　　　++i;  
　　　　}  
　if(i==nums.size())  
　　　　return maxsum;  
```
  
3.Otherwise, if the current sum is less than zero,we should assigns the value of next element to current sum.If not,add it.  
```  
　maxsum=nums[i],sum=nums[i];  
　　　　　for(int j=i+1;j<nums.size();++j){  
　　　　　　if(sum<=0)  
　　　　　　　　sum=nums[j];  
　　　　　　else   
　　　　　　　　sum+=nums[j];  
　　　　　　if(sum>maxsum)  
　　　　　　　　maxsum=sum;  
　　　　}              
```