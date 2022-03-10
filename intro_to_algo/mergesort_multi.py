def twoWayMerge(lst1, lst2):
    # Implement the two way merge algorithm on 
    #          two ascending order sorted lists
    # return a fresh ascending order sorted list that 
    #          merges lst1 and lst2
    # your code here
    i = 0
    arr = lst1 + lst2
    mid = len(lst1) - 1
    right = len(arr) - 1
    j = mid + 1
    temp_store = []
    while(i<=mid and j<=right):
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

def oneStepKWayMerge(list_of_lists):
    if (len(list_of_lists) <= 1):
        return list_of_lists
    ret_list_of_lists = []
    k = len(list_of_lists)
    for i in range(0, k, 2):
        if (i < k-1):
            ret_list_of_lists.append(twoWayMerge(list_of_lists[i], list_of_lists[i+1]))
        else: 
            ret_list_of_lists.append(list_of_lists[k-1])
    return ret_list_of_lists

def kWayMerge(list_of_lists):
    k = len(list_of_lists)
    if k == 1:
        return list_of_lists[0]
    else:
        new_list_of_lists = oneStepKWayMerge(list_of_lists)
        return kWayMerge(new_list_of_lists)
    
    
arr_left = [1,2,3]
arr_right = [-2,0,6]
new_arr = twoWayMerge(arr_left, arr_right)
print(new_arr)
lst2 = kWayMerge([[-2, 4, 5 , 8], [0, 1, 2], [-1, 3,6,7]])
assert lst2 == [-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8], "Test 2 failed"
print(lst2)