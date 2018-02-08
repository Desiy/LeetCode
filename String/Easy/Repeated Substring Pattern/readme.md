#Problem:  

Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.

##Example 1:
	Input: "abab"  

	Output: True  

	Explanation: It's the substring "ab" twice.  
##Example 2:
	Input: "aba"  

	Output: False  
##Example 3:
	Input: "abcabcabcabc"  

	Output: True  

	Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)  

#Solution:
  1.The first char of string s must be the first char of substring.The last char of it must be the last char of it.
  2.Combine string s and sting s to be newstring.
  3.Remove the first char and the last char of newstring.
  4.If we can find s in newstring still,return true.
 
