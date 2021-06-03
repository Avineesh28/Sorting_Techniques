def bubbleSort(arr):
    n=len(arr)
    for i in range(0,n): #iteration count i=0
        for j in range(0,n-i-1):#j=0 1 ...5
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
        print (arr)
arr = [34,26,52,11,6,43]
bubbleSort(arr)
print(arr, end=" ")