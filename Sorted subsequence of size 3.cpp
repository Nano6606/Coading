QUESTION LINK: 
https://www.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1

Example 1:

Input:
N = 5
A[] = {1,2,1,1,3}
Output: 1
Explanation: a sub-sequence 1 2 3 exist.


SOLUTION:

class Solution {
public:
    vector<int> find3Numbers(vector<int>& arr, int N) {
        int leftMin = numeric_limits<int>::max();
        vector<int> res;

        for (int i = 0; i < N; ++i) {
            if (arr[i] > leftMin) { 
                for (int j = i + 1; j < N; ++j) {
                    if (arr[j] > arr[i]) { 
                        res = {leftMin, arr[i], arr[j]};
                        return res; 
                    }
                }
            } else {
                leftMin = arr[i]; 
            }
        }

        return res; 
    }
};
