def binarySearch(list, target):
    first = list[0]
    last = list[len(list) - 1]
    for i in list:
        mid = len(list)//2
        if target == list[mid]:
            return mid
        elif target > list[mid]:
            return binarySearch(list[mid:], target)
        else:
            return binarySearch(list[:mid], target)
    return -1                

list = input("Enter a list of elements").split()
target = input("Enter the element to be search")
res = binarySearch(list, target)
if res == -1:
    print("Element is not present")
else:
    print(f"Element is present at position {res+1}")        