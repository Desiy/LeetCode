# Question
>Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.  

>The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.  

# Solution  
1.Using stack to put char like '{','[','('.  

2.Once the case that stack is empty eliminated,find the corresponding char at the top of stack.If succeed, remove it.Otherwise,Continue.  
  ```
　　if(temp.empty())  
　　　　return false;  
　　else if(ch=='}'&&temp.top()=='{')  
　　　　temp.pop();  
　　else if(ch==']'&&temp.top()=='[')  
　　　　temp.pop();  
　　else if(ch==')'&&temp.top()=='(')  
　　　　temp.pop();  
　　else return false;  
    ```  
