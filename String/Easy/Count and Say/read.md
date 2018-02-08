# Question  
>The count-and-say sequence is the sequence of integers with the first five terms as following:
1. 1
2. 11
3. 21
4. 1211
5. 111221

>1 is read off as "one 1" or 11.
>11 is read off as "two 1s" or 21.
>21 is read off as "one 2, then one 1" or 1211.  

>Given an integer n, generate the nth term of the count-and-say sequence.  

>Note: Each term of the sequence of integers will be represented as a string.  

# Solution:
1. Each element excluding 1 generates how many same integers like 1 or 2 in the last element and that integer.  
2.  
```
　while(--n){  
　　　　string curstr="";  
　　　　for(int i=0;i<str.size();++i){               
　　　　　　　int cnt=1;  
　　　　　　　while(i+1<str.size()&&str[i]==str[i+1]){  
　　　　　　　　　++cnt;  
　　　　　　　　　++i;  
　　　　　　　}  
　　　　　　　curstr+=to_string(cnt)+str[i];              
　　　　　　}  
　　　　　　str=curstr;  
　　　　}  
```  
From the above code,if n is 1,then body of while will not be inplemented and return str which is "1".Variable cnt counts the number of the same integer.