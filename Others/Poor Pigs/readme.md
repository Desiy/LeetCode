#Problem:  

There are 1000 buckets, one and only one of them contains poison, the rest are filled with water. They all look the same. If a pig drinks that poison it will die within 15 minutes. What is the minimum amount of pigs you need to figure out which bucket contains the poison within one hour.

Answer this question, and write an algorithm for the follow-up general case.

##Follow-up:  

If there are n buckets and a pig drinking poison will die within m minutes, how many pigs (x) you need to figure out the "poison" bucket within p minutes? There is exact one bucket with poison.

#Solution:
1.If a pig drinks that poison it will die within 15 minutes and we need to figure out which bucket contains the poison within one hour:  

	1  2  3  4  5  
	6  7  8  9  10  
	11 12 13 14 15  
	16 17 18 19 20  
	21 22 23 24 25  

Use one pig to find the row(e.g:1,2,3,4,5) meanwhile use the other pig to find the column.(e.g:1,6,11,16,21).  

2.If we have 3 pigs,we can find 5×5×5=125 buckets which means one pig is used to find one dimension.   