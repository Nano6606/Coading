QUESTION LINK:- 
https://www.geeksforgeeks.org/problems/print-an-array-in-pendulum-arrangement4004/1

Example:
Input : 
n = 5
arr[] = {1, 3, 2, 5, 4}
Output :
5 3 1 2 4
Explanation: 
The minimum element is 1, so it is 
moved to the middle. The next higher
element 2  is moved to the right of 
the middle element while the next 
higher element 3 is moved to the left 
of the middle element and this process
is continued.

SOLUTION:-

#include <vector>
#include <algorithm>
using namespace std;

vector<int> pendulumArrangement(int arr[], int n) {
    sort(arr, arr + n);

    vector<int> pendulum(n, 0);

    int middle = (n - 1) / 2;
    pendulum[middle] = arr[0];

    int left = middle - 1;
    int right = middle + 1;

    for (int i = 1; i < n; ++i) {
        if (i % 2 == 1) 
        { 
            pendulum[right++] = arr[i];
        } 
        else 
        { 
            pendulum[left--] = arr[i];
        }
    }

    return pendulum;
}

