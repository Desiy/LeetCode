# Problem  
> Related to question Excel Sheet Column Title  

> Given a column title as appear in an Excel sheet, return its corresponding column number.  

> For Example  

	A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 

# Solution  

According to every character in string,the first char(character) is the top digit of result,the last one is least significant digit.  

