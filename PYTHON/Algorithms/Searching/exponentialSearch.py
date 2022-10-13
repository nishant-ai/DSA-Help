# Python implementation of recursive exponential search algorithm.
# This algorithm takes a sorted array as input and returns the index of a target element.
# If the element does not exist in the array the algorithm returns -1.


def binarySearch( arr, l, r, x):
	if r >= l:
		mid = l + ( r-l ) // 2
		
		# If the element is in the middle of the array
		if arr[mid] == x:
			return mid
		
		# If the element is smaller than the middle value then it must be in the left half
		if arr[mid] > x:
			return binarySearch(arr, l,
								mid - 1, x)
		
		# Else the element can only be in the right half
		return binarySearch(arr, mid + 1, r, x)
		
	# If the element does not exist
	return -1

# Returns the index of the first occurence of the target element
def exponentialSearch(arr, n, x):
	# If the first element is the target element
	if arr[0] == x:
		return 0
		
	# Find the range for binary search
	i = 1
	while i < n and arr[i] <= x:
		i = i * 2
	
	# Call binary search on the range
	return binarySearch( arr, i // 2,
						min(i, n-1), x)
	

# Test Case
list = input("Enter a list of elements").split()
target = input("Enter the element to be search")
n = list.len()

result = exponentialSearch(list, n, target)
if result == -1:
	print ("Element not found in the array")
else:
	print ("Element is present at index %d" %(result))

