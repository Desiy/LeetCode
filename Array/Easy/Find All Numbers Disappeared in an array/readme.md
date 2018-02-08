# Problem  
>Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.  

>Find all the elements of [1, n] inclusive that do not appear in this array.  

>Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.  

# Solution  

1.Place the integer nums[i] in proper position(nums[i]-1).

2.If there are some integers nums[i] inequal to (i+1),they are the elements we want.  
