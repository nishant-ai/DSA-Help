# Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

# A subarray is a contiguous part of an array.

 

# Example 1:

# Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
# Output: 6
# Explanation: [4,-1,2,1] has the largest sum = 6.

def maxSubArray(nums):
    maxSum = sum(nums)
    curr = 0
    for i in range(len(nums)):
        curr += nums[i]
        maxSum = max(maxSum, curr)
        if curr < 0:
            curr = 0
    return maxSum

arr = list(map(int, input().split()))
print("Maximum Subarray is : ", end= " ")
print(maxSubArray(arr))