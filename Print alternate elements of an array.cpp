QUESTION LINK: 
https://www.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1

SOLUTION:

void print(int ar[], int n) {
    for (int i = 0; i < n; i += 2) {
        cout << ar[i] << " ";
    }
}
