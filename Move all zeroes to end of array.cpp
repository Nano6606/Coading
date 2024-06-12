QUESTION LINK:-
  https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

  
Example 1:
    Input:
    N = 5
    Arr[] = {3, 5, 0, 0, 4}
    Output: 3 5 4 0 0
    Explanation: The non-zero elements
    preserve their order while the 0
    elements are moved to the right.

  
SOLUTION:

class Solution {
public:
    void pushZerosToEnd(int arr[], int n) {
        int count = 0; 
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[count] = arr[i];
                count++;
            }
        }
        while (count < n) {
            arr[count] = 0;
            count++;
        }
    }
};
