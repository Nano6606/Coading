QUESTION LINK: 
https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

Example 1:

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
Example 2:

Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20 
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6.


  
SOLUTION:

class Solution {
public:
    void reverse(int arr[], int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotateArr(int arr[], int d, int n) {
        d = d % n; 
        if (d == 0) return; 
        
        reverse(arr, 0, d - 1); 
        reverse(arr, d, n - 1); 
        reverse(arr, 0, n - 1); 
    }
};
