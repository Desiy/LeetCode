# Qusetion  

>Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.  

# Solution  
1.When needle is empty,it doesn't need to search needle in the haystack.  
2.Define variables:i,j and count.  

* i:index for haystack
* j:index for needle
* count:count the chars which fit the condition.

3.Once a char did not match the condition,reset the j and count to be zero,and start comparing again.  
```
　　while(i<haystack.size()) {  
　　　　++count;  
　　　　if (haystack[i++] != needle[j++]){  
　　　　　　　　j=0;  
　　　　　　　　i=i-count+1;  
　　　　　　　　count=0;  
　　　　　　}  
　　　　　　if (j == needle.size())  
　　　　　　　　return i-count;  
　　　　　}  
``` 
