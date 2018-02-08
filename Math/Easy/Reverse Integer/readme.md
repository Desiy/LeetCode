#Rerverse Integer:
##Question  
Given a 32-bit signed integer, reverse digits of an integer.

##Thougnht  
Some integers will be out of range after reversal.The variable r is *long long int* to forbid the overflow.

		 long long r=0;	

Reverse the integer:  

```
while (x!=0) {
　　r = r * 10 + x % 10;　　
　　x /= 10;　　
			}
```

If r is smaller than INT_MIN or  bigger than INT_MAX,return 0.Otherwise,return the reversed number.  

	 return (r>INT_MAX||r<INT_MIN?0:r);  


