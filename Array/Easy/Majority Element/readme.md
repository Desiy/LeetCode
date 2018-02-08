# Problem
>Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.  

>You may assume that the array is non-empty and the majority element always exist in the array.  

# Solution  

1.We choose the first element  as majority element.  

2.If there are elements which is the same as it,increase the occurrence's record.Otherwise,decrease it.  

3.When an integer is majority element,its occurrence number will not be zero.  

