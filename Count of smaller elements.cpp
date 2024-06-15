QUESTION LINK:-
https://www.geeksforgeeks.org/problems/count-of-smaller-elements5947/1


Given an sorted array A of size N. Find number of elements which are less than or equal to given element X.
Example 1:
Input:
N = 6
A[] = {1, 2, 4, 5, 8, 10}
X = 9
Output:
5


SOLUTION:-

#include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= x) {
            count++;
        } else {
            break; // Since array is sorted, no need to check further
        }
    }
    return count;
}
