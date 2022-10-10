## Linear Search
 ### Best Case: O(1)
    The target value is in the first element of the array. So the search
    takes some tiny, and constant amount of time. 

### Worst Case: O(N)
    1. The target value is in the last element of array. So the search takes an amount
        of time propotional to the length of an array.
    2. After going through every element in the array the target value isn't found. 

### Algorthim
 1. Traverse the array
 2. Match the target element with array element
 3. If the target element is found, return the index position of the array element
 4. If the target element is not found, return -1

** For the code check LinearSearch.java file