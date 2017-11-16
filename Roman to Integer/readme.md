# Roman to Integer  

Given a roman numeral, convert it to an integer.
Input is guaranteed to be within the range from 1 to 3999.

# Solution  
1.The transformation relationship between integer and Roman number:  
| roman | int  |
|-------|------|
| I     | 1    |
| V     | 5    |
| X     | 10   |
| L     | 50   |
| C     | 100  |
| D     | 500  |
| M     | 1000 |

2.If the smaller roman numberal is left of the bigger one,then the  bigger one substracts the smaller one;otherwise,add them.  

```
for(int i=0;i<s.size();++i){  
　　if(i==s.size()-1||romanto(s[i])>=romanto(s[i+1]))  
 　　　　r+=romanto(s[i]);  
　　else r-=romanto(s[i]);  
　}  
```

