QUESTION LINK:
https://www.geeksforgeeks.org/problems/padovan-sequence2855/1


Example:

Input: n = 3
Output: 2
Explanation: We already know, P1 + P0 = P3 and P1 = 1 and P0 = 1

Input: n = 4
Output: 2
Explanation: We already know, P4  = P2 + P1 and P2 = 1 and P1 = 1



SOLUTION:

#define MOD 1000000007
class Solution {
public:
    int padovanSequence(int n) {
        vector<long long> padovan(n + 1, 0);
        
        padovan[0] = padovan[1] = padovan[2] = 1;
        
        for (int i = 3; i <= n; i++) {
            padovan[i] = (padovan[i - 2] + padovan[i - 3]) % MOD;
        }
        
        return padovan[n];
    }
};

