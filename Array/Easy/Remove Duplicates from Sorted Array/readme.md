# Question
> Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.  

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.  

# Solution  
1.If the size of vector is empty,return 0.  

2.Define two variables: i and j,which initial values are both zero.  

3.When j is in the range of vector's size,if nums[i] is equal to nums[j],than j plus one,else replace nums[++i] with nums[j++].  
  ```
  while(j<length){  
    if(nums[i]==nums[j])  
      ++j;  
    else nums[++i]=nums[j++];  
   }  
  ```