# Problem:  

Find the largest palindrome made from the product of two n-digit numbers.

Since the result could be very large, you should return the largest palindrome mod 1337.

##Example:

	Input: 2  

	Output: 987  

	Explanation: 99 x 91 = 9009, 9009 % 1337 = 987  

##Note:

The range of n is [1,8].

#Solution:  

BY *long buildPalindrome(int num)* we know the palindrome which is always bigger than num's power.

##Example:

	num=998 => buildparlindrome return 998899  
	
	99899 > 998*998 =>99899 only can be the product of 999(which is bigger than 998)  






