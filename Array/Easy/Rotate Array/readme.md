# Problem  
>Rotate an array of n elements to the right by k steps.  

>For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].  

*Note:
Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.* 

# Solution  

## Solution 1  

Using another vector to save the integers,every element nums[i] is placed at the i+k.If (i+k) is out of range,palced it at (i+k)%len.  

## Solution 2  

1.Reverse the first len-k elements.  
  *(len):length of vector*

2.Reverse the remainning elements.  

3.Reverse all th elements.  

## Solution 3

1.While we firstly executed the loop,we swapped the first k elements with the last k elements which means the first k elements are at right position.  

2.Do the same loop with the remainning (len-k) elements.
  *k%=len:when k is bigger than the vector's size,mod it.*

