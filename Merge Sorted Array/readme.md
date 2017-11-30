# Problem  
> Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.  

*Note:  
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.*  

# Solution  

1.Compare the value of two array,and put the larger one at the end of array "Nums1".  

```
　while(i>=0&&j>=0){  
　　　　　　　nums1[r--]=nums1[i]>=nums2[j]?nums1[i--]:nums2[j--];  
　　　　}  
```

2.After comparing with all the integer in the "Nums1",we should put the residual integers in the array.  

		while(j>=0)  nums1[r--]=nums2[j--];
