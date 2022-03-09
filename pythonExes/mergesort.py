import numpy as np

def merge(arr, left, mid, right):
    i = left
    j = mid + 1
    temp_store = []
    while(i<=mid and j<=right):
        if arr[i] < arr[j]:
            temp_store.append(arr[i])
            i = i + 1
        else:
            temp_store.append(arr[j])
            j = j + 1
    if i < mid:
        temp_store = temp_store + arr[i:mid+1]
    if j < right:
        temp_store = temp_store + arr[j:right+1]
    return temp_store



arr_left = [-1, 2, 5, 15, 18, 100, 110]
arr_right = [3, 4, 7,40, 59, 70]
arr = arr_left + arr_right
left = len(arr_left)
right = len(arr) - 1
mid = (left + right)//2
new_arr = merge(arr,0, len(arr_left)-1, right)
print(mid)
print(arr)
print(new_arr)
