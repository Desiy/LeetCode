# Question  
>Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.  

>You may assume the integer do not contain any leading zero, except the number 0 itself.  

>The digits are stored such that the most significant digit is at the head of the list.  

# Solution  
1.First of all,add 1 to the last element.

2.When the value of the  last element in the vector is 10,reset the value to be zero and add 1 to the last but one digit...and so on.

```
　while(digits[i]==10&&i>0){  
　　　　　　digits[i]=0;  
　　　　　　digits[i-1]+=1;  
　　　　　　--i;  
　　　　}  
```

3.If the first digit is 10,then increse an element which value is zero in the vector,and assign the first element as 1.  

```
　if(digits[0]==10){  
　　　　　　digits.push_back(1);  
　　　　　　digits[0]=1;  
　　　　　　digits[length]=0;  
        }  
```
