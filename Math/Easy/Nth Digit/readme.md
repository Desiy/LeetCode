#Problem:

Find the nth digit of the infinite integer sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...

##Note:
n is positive and will fit within the range of a 32-bit signed integer (n < 231).

##Example 1:

	Input: 3  
	Output: 3  

	Example 2:  
	Input: 11  
	Output: 0  

	Explanation:
	The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the number 10.

#Solution:  

1.
	len:the length of target number  
	start:start = 1,10,100...the first number of each range  
	range(len==1):from 1 to 9  
	range(len==2):from 10 to 99  
	range(len==3):from 100 to 999  
	...

2.
	start+=(n-1)/len:located at the target number
    st[(n-1)%len]-'0':located at the target digit  


