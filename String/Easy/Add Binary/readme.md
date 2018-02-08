# Question  

> Given two binary strings, return their sum (also a binary string).

> For example,
> a = "11"
> b = "1"
> Return "100".   

# Solution  

1.The result of two binary number addition is decided by their sum and the value of flag which indicates whether the lower bit exceeded 1.  

```
　while(i>=0||j>=0||flag){  
　　　　　　int curr=((i>=0?a[i--]-'0':0)+(j>=0?b[j--]-'0':0)+flag);  
　　　　　　c+=(curr%2+'0');  
　　　　　　flag=(curr>1)?1:0;  
　　　　}  
```

2.Swap the first char with the last char and then swap the second char with the penult...and so on.  

```
　int len_c=c.size();  
　　　　for(int i=0;i<len_c/2;++i){  
　　　　　　char temp=c[i];  
　　　　　　c[i]=c[len_c-i-1];  
　　　　　　c[len_c-i-1]=temp;  
　　　　}  
```

*After If flag is 1,string should add a char '1' before all the character in the string.*  
