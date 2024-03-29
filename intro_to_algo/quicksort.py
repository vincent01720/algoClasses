def partition(arr, low, high):
    i = (low-1)         # index of smaller element
    pivot = arr[high]     # pivot
 
    for j in range(low, high):
 
        # If current element is smaller than or
        # equal to pivot
        if arr[j] <= pivot:
 
            # increment index of smaller element
            i = i+1
            arr[i], arr[j] = arr[j], arr[i]
 
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return (i+1)

def quickSort(arr, low, high):
    if len(arr) == 1:
        return arr
    if low < high:
 
        # pi is partitioning index, arr[p] is now
        # at right place
        pi = partition(arr, low, high)
 
        # Separately sort elements before
        # partition and after partition
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)
        return arr
 
# Driver code to test above
arr = [10, 7, 8, 9, 1, 5]
n = len(arr)
print("\n*****************************************")
print("Array is:        {} *****".format(arr))
print("Sorted array is: {} *****".format(quickSort(arr, 0, n-1)))
print("*****************************************\n")

a = 8
b = 8

if a>b:
    c = b
    b = a
    a = c
print(a)
print(b)

sum = 0
iter = a
while iter <= b:
    sum = sum + iter
    iter = iter + 1
print(sum)
