QUESTION LINK:-
https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win
  
SOLUTION:-

class Solution 
{
    public:
    int searchInSorted(int arr[], int N, int K) {
        int left = 0;
        int right = N - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == K) {
                return 1; // K is found in the array
            } else if (arr[mid] < K) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1; // K is not found in the array
    }
};
