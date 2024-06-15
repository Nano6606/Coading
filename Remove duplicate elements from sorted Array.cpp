QUESTION LINK:-
https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

SOLUTION:-

class Solution{
public:
    int remove_duplicate(int a[], int n){
        if (n == 0) return 0; 
        
        int idx = 1; 
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[i - 1]) {
                a[idx++] = a[i];
            }
        }
        
        return idx; 
    }
};
