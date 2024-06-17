QUESTION LINK:-
https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1

Example:

Input:
N = 7
A[] = {86,39,90,67,84,66,62}
x = 42, y = 12
Output: -1
Explanation: x = 42 and y = 12. We return -1 as x and y don't exist in the array.


SOLUTION:-

class Solution {
public:
    int minDist(int a[], int n, int x, int y) {
        int min_dist = INT_MAX;
        int last_index = -1;
        bool found = false;
        
        for (int i = 0; i < n; ++i) {
            if (a[i] == x || a[i] == y) {
                if (found && a[i] != a[last_index]) {
                    min_dist = min(min_dist, i - last_index);
                }
                found = true;
                last_index = i;
            }
        }
        
        return (min_dist == INT_MAX || !found) ? -1 : min_dist;
    }
};
