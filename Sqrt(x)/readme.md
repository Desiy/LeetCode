# Question  

> Implement int sqrt(int x).

> Compute and return the square root of x.

> x is guaranteed to be a non-negative integer.  

# Solution  

## Binary Search  

1.Find the median of the number input and test whether its square fits.  
2.When it is smaller,updata the low integer.Otherwise,updata the high one.  
```
　while(h>=l){  
　　　　　　m=l+(h-l)/2;  
　　　　　　if(m*m==x)  return m;  
　　　　　　if(m*m<x) l=m+1;  
　　　　　　else h=m-1;  
　　　}  
```

## Newton's iterative Method  

1.Based on a fomula.  
```
　　　　long r=x;          
　　　　while(r*r>x)  
　　　　　　r=(x/r+r)/2;  
```
