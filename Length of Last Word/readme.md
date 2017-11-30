# Question  
>Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

>If the last word does not exist, return 0.

*Note: A word is defined as a character sequence consists of non-space characters only.*  

# Solution  
1.If string is empty,return 0.  

2.From the last char,decreses the index untill it's value is not space.　　

  `while(i>=0 && s[i]==' ')  --i;`  

3.Counts the number of char which is not space and return it.  

```
　while(i>=0&&s[i]!=' '){  
　　　　　　--i;  
　　　　　　++result;  
　　　　}  
```
