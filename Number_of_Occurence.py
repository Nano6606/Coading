Link of the Ouestion:- 
https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

SOLUTION:-

class Solution:
	def count(arr, n, x):
		c=0
		for i in arr:
		    if(i==x):
		        c=c+1
		return c
