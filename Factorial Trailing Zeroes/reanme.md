# Problem  
> Given an integer n, return the number of trailing zeroes in n!.  

> Note: Your solution should be in logarithmic time complexity.  

# Solution  

1.What decides the number of trailing zeroes is the number of 2 and 5.(2＊5=10).  

2.Choosing five as factor,add n/5 into result.

		  　while(n>0){  
           　　res+=n/5;  
            　　n=n/5;            
        　}  

