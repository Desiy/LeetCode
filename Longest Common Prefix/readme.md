# Longest Common Prefix  
Write a function to find the longest common prefix string amongst an array of strings.  

#Solution  
* Case 1:Vector is empty.then return 0  

* Case 2: Vector has one member,then return that member  

* Case 3:Comparing first char of every member,if anyone of them don't match,break.Otherwise,continue to compare the second one...and so on.  
 
```
　for(int i=0;i<strs[0].size();++i){  
　　　int count=0;  
　　　for(int j=0;j<strs.size()-1;++j){  
　　　　　if(strs[j][i]==strs[j+1][i])  
			　++count;  　  
　　　　　else break;  
	　　}  
　　　if(count==strs.size()-1)  
　　　　　comprefix+=strs[count][i];  
　　　else   
　　　　　break;  
　　} 
```

