QUESTION LINK:
https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

SOLUTION:

class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        long long min_val = a[0]; // Initialize min_val with the first element
        long long max_val = a[0]; // Initialize max_val with the first element

        // Iterate through the array from the second element
        for (int i = 1; i < n; ++i) {
            // Update min_val if the current element is smaller
            if (a[i] < min_val) {
                min_val = a[i];
            }
            // Update max_val if the current element is larger
            if (a[i] > max_val) {
                max_val = a[i];
            }
        }

        // Return a pair containing min_val and max_val
        return make_pair(min_val, max_val);
    }
};
