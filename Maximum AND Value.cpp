QUESTION LINK: 
https://www.geeksforgeeks.org/problems/maximum-and-value2637/1


Example 1:

Input : Arr[] = {4, 8, 12, 16}
Output : 8
Explanation:
Pair (8,12) has the Maximum AND Value
i.e. 8.


SOLUTION:

class Solution {
public:
    int maxAND(int arr[], int n) {
        int res = 0;

        for (int bit = 31; bit >= 0; --bit) {
            res |= (1 << bit);
            int count = 0;
            for (int i = 0; i < n; ++i) {
                if ((arr[i] & res) == res) {
                    ++count;
                }
            }

            if (count < 2) {
                res ^= (1 << bit);
            }
        }

        return res;
    }
};

