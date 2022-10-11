"""
Problem Statement:  Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
Example:
  Input: nums1 = [1,3], nums2 = [2]
  Output: 2.00000
  Explanation: merged array = [1,2,3] and median is 2.

Solution Approach:
  Before that lets see the definition of Median : Is is the middle value of a series of numbers arranged in order of size.

  So, given two lists, we're going to combine them first,
  2 Step: lets sort the resultant list.
  3 Step: Find the middle index, then apply the median formula.
      if mid is odd,
        median = (mid+1)/2th term
        
      if mid = even,
        median = [((mid/2) + (mid/2 + 1)) / 2]th term


"""


class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in nums2:
            nums1.append(i)
                   
        nums1.sort()
        lengthOfMergedList = len(nums1)
        mid = (lengthOfMergedList-1)//2
        if(lengthOfMergedList % 2 == 0):
            return (nums1[mid] + nums1[mid + 1]) / 2
        else:
            return nums1[mid]

