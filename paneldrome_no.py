"""Given an array of positive integers. We need to make the given array a
'Palindrome'. The only allowed operation is" merging" (of two adjacent elements). 
Merging two adjacent elements means replacing them with their sum. The task is to 
find the minimum number of merge operations required to make the given array a 
'Palindrome'.To make any array a palindrome, we can simply apply merge 
operation n-1 times where n is the size of the array 
(because a single-element array is always palindromic, 
similar to single-character string). In that case, 
the size of array will be reduced to 1. But in this problem, 
we are asked to do it in the minimum number of operations."""

arr = [1,-2,-3,-5,1]
#to store min. number of operation
count = 0
#traverse
i = 0 
j = len(arr)-1

while i<j:
    if arr[i] < arr[j]:
        arr[i+1] += arr[i] 
        print(arr)
        i+= 1
        count+= 1
    elif arr[i] > arr[j]:
        arr[j] += arr[i]
        j-= 1
        i+=1
        count += 1
    else:
        i+= 1
        j-= 1
print(count)
