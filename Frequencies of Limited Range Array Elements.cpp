QUESTION LINK: 
https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

Example 1:

Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.



  
SOLUTION:

class Solution {
public:
    void frequencyCount(vector<int>& arr, int N, int P) {
        vector<int> frequency(N, 0); 

        for (int i = 0; i < N; ++i) {
            if (arr[i] >= 1 && arr[i] <= N) {
                frequency[arr[i] - 1]++;
            }
        }
        
        for (int i = 0; i < N; ++i) {
            arr[i] = frequency[i];
        }
    }
};

