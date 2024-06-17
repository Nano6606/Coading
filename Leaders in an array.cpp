QUESTION LINK:-
https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

Example:

Input: n = 5, arr[] = {10,4,2,4,1}
Output: 10 4 4 1
Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side

Input: n = 4, arr[] = {5, 10, 20, 40} 
Output: 40
Explanation: When an array is sorted in increasing order, only the rightmost element is leader.


SOLUTION:-

class Solution {
public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> result;
        if (n == 0) return result;
        
        int max_right = arr[n-1];
        result.push_back(max_right);
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max_right) {
                max_right = arr[i];
                result.push_back(max_right);
            }
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
