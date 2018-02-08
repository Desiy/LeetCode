#Problem  
Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

##Example:
Given num = 16, return true. Given num = 5, return false.

##Follow up: 
Could you solve it without loops/recursion?

#Solution  

1.The power of 4 must be greater than 1.

2.Estimate  whether the number is a power of 2:  
   In the 32 bit format, the right side of a power of 2 would be "1" following  by any number of "0".  

3.(4^n-1)=(2^n+1)(2^n-1).Either (2^n+1)or(2^n-1) would be the multiple of 3,so (4^n-1) would be the multiple of 3.  

