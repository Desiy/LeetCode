# Palindrome Number

## Definition

>A palindrome number is a number such that if we reverse it, it will not change.

## Solution

1.  If int x is negative or its last number is 0(x!=0),it can not be a 		palindromic number.

	``` 
	if(x<0||(x%10==0 && x!=0))  
	　　return false;  
	```
	   
2.  Define a variable r to denote the reversal  of x.

	```
	int r=0;
	while(x>r){            
	　　r=r*10+x%10;  
	　　x/=10;           
	}
	```

	*We don't need to reverse all the number in x,only when r is smaller than x*
3. There are two kinds of results in step2:r may  equal to x ,or have   one more number than x.

	`return (x==r||(r/10==x));`

