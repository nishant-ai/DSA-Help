# Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

# Example 1:

# Input: nums = [1,2,3,1]
# Output: true
# Example 2:

# Input: nums = [1,2,3,4]
# Output: false

from collections import Counter


def containsDuplicate(nums):
        temp = Counter(nums)
        for i in temp:
            if temp[i] != 1:
                return True
        return False

nums = list(int, input().split())

print("Does the array contain any duplicate ? ")
print(containsDuplicate(nums))