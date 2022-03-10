import numpy as np

def merge(arr, left, mid, right):
    # n1 = mid - left + 1
    # n2 = right - mid
 
    # # create temp arrays
    # L = [0] * (n1)
    # R = [0] * (n2)
 
    # # Copy data to temp arrays L[] and R[]
    # for i in range(0, n1):
    #     L[i] = arr[left + i]
 
    # for j in range(0, n2):
    #     R[j] = arr[mid + 1 + j]
         
    i = left #0
    j = mid + 1 # 3+1 = 4
    temp_store = []
    # if len(arr[0:mid+1]) <= 1 or len(arr[mid+1:right+1])<=1:
    #     if arr[mid] < arr[mid+1]:
    #         return arr
    #     else:
    #         return arr
    # else:
    while(i<=mid and j<=right): #0 <=3 and 4 <=n-1
        if arr[i] < arr[j]:
            temp_store.append(arr[i])
            i = i + 1
        else:
            temp_store.append(arr[j])
            j = j + 1
    if i <= mid:
        temp_store = temp_store + arr[i:mid+1]
    if j <= right:
        temp_store = temp_store + arr[j:right+1]
    return temp_store



arr1 = [1,2,4,6,8,89]
arr2 = [55,100,200]
arr = arr1 + arr2
left = 0
right = len(arr) - 1
mid = len(arr1)-1
new_arr = merge(arr,0, mid, right)
print('********************')
print(mid)
print(arr)
print(new_arr)
print('********************')
