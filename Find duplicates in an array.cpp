QUESTION LINK: 
https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

Examples:

Input: arr[] = {0,3,1,2}, n = 4
Output: -1
Explanation: There is no repeating element in the array. Therefore output is -1.
  
Input: arr[] = {2,3,1,2,3}, n = 5
Output: 2 3 
Explanation: 2 and 3 occur more than once in the given array.



SOLUTION:

class Solution {
public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            int index = arr[i] % n;
            arr[index] += n; 
        }
        for (int i = 0; i < n; ++i) {
            if (arr[i] / n > 1) 
            { 
                result.push_back(i);
            }
        }
        if (result.empty()) {
            result.push_back(-1);
        }
        return result;
    }
};

