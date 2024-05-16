QUESTION LINK:- 
https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
  
SOLUTION:-

class Solution{
public:	
	int print2largest(int arr[], int n) 
	{
	    // code here
	    int largest = arr[0];
	    for( int i=1; i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            largest= arr[i];
	        }
	    }
	    int slargest = -1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>slargest && arr[i]<largest)
	        {
	            slargest = arr[i]; 
	        }
	    }
	 return slargest;   
	}
};
