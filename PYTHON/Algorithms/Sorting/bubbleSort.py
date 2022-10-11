def bubbleSort(array):
  for i in range(len(array)):
    for j in range(0, len(array)-i-1):

      # compare two adjacent elements
      if array[j] > array[j + 1]:

        # swapping elements if elements are not in the intended order
        temp = array[j]
        array[j] = array[j+1]
        array[j+1] = temp

data = [-2, 45, 0, 11, -9]

bubbleSort(data)

print('Sorted Array in Ascending Order:')
print(data)