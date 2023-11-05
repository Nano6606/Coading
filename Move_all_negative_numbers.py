Link of the Question:-
https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

SOLUTION:-

def segregateElements(self, arr, n):
        temp = [] 
        for i in range(n):
            if arr[i] < 0:
                temp.append(arr[i])
        j = 0
        for i in range(n):
            if arr[i] >= 0:
                arr[j] = arr[i]
                j += 1

        for i in range(j, n):
            arr[i] = temp[i - j]
