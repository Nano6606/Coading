QUESTION LINK: 
https://www.geeksforgeeks.org/problems/min-sum-formed-by-digits3551/1


Example 1:

Input:
N = 6
arr[] = {6, 8, 4, 5, 2, 3}
Output:
604
Explanation:
The minimum sum is formed by numbers 
358 and 246

  

SOLUTION:

class Solution{
public:
    long long int minSum(int arr[], int n) {
        // Sort the array in non-decreasing order
        sort(arr, arr + n);
        
        long long int num1 = 0, num2 = 0;
        
        // Alternate digits to form two numbers
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0)
                num1 = num1 * 10 + arr[i];
            else
                num2 = num2 * 10 + arr[i];
        }
        
        // Calculate the sum of the two numbers
        return num1 + num2;
    }
};
