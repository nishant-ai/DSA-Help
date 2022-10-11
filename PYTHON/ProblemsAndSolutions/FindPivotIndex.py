'''
Find Pivot Index of an array.
An index is pivot index if the element in the left of it and elements in the right of it have same sum.
'''
def PivotIndex(arr):
    f = 0
    s = 0
    for i in range(1, len(arr)):
        s += arr[i]
    for i in range(len(arr)):
        if f == s:
            print("Pivot Index is", i)
            return i
        elif i < len(arr) - 1:
            f += arr[i]
            s -= arr[i + 1]
        else:
            return -1


arr = [1, 7, 3, 6, 5, 6]
PivotIndex(arr)

#OUTPUT : Pivot Index is 3
