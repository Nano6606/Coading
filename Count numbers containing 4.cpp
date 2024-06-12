QUESTION LINK:
https://www.geeksforgeeks.org/problems/count-numbers-containing-43022/1

You are given a number n, Return the count of total numbers from 1 to n containing 4 as a digit.

Examples:

Input: n = 9
Output: 1
Explanation: 4 is the only number between 1 to 9 which contains 4 as a digit.
Input: n = 14
Output: 2
Explanation: 4 and 14 are the only number between 1 to 14 that contains 4 as a digit.


  
  SOLUTION:
  
class Solution {
public:
    int countNumberswith4(int n) {
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            int num = i;
            while (num > 0) {
                if (num % 10 == 4) {
                    ++count;
                    break;
                }
                num /= 10;
            }
        }
        return count;
    }
};
  
