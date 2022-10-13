def waveSort(a):
    n = len(a)
    for i in range(0, n-1, 2):

        if i > 0 and a[i-1] > a[i]:
            a[i], a[i-1] = a[i-1], a[i]
            
        if i <= n-2 and a[i+1] > a[i]:
            a[i], a[i+1] = a[i+1], a[i]
    return arr
    
arr= [1, 3, 4, 2, 7, 8]
print(arr)
print("after sorting")
print(waveSort(arr))
