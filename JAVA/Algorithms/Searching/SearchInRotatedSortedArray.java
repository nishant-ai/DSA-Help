package JAVA.Algorithms.Searching;

// PROBLEM LINK : https://leetcode.com/problems/search-in-rotated-sorted-array/

/*
Explanation:
The Rotated sorted array has two sorted sections, let the sections be called as left and right section respectively.
The elements in the left section will be always greater than the element in the right section.
The mid is found in the middle of start and end index which is initialized as the start and end of the array.
There are three paths for the flow of the program:
  1) If the target is found in the middle index, just return the index.
  2) If the target lies in the part of left section, ie if start element is less than mid element and target is in between these, 
     move end to middle - 1. Otherwise move start to middle + 1.
  3) If the target lies in the part of right section, ie if end element is greater than mid element and target is in between these, 
     move start to middle + 1. Otherwise move end to middle - 1.
 If the target isn't found just return -1.
*/

public class SearchInRotatedSortedArray
{
  public static void main (String[]args)
  {
    int [] nums = {0,1,2,4,5,6,7};
    System.out.println(search(nums, 5));
  }
  public static int search(int[] nums, int target) {
        int s = 0; // start index initialized to the start of the array
        int e = nums.length - 1; // end index initialized to the end of the array
        int m = -1;
        while(s <= e){
            m = s + (e - s)/2; // middle index found by taking the middle between start and end
            if(nums[m] == target) return m; // answer found at mid
            else if(nums[s] <= nums[m]){
                if(target < nums[m] && target >= nums[s]) e = m - 1; // answer to the part of left sorted section
                else s = m + 1;
            }else if(nums[e] >= nums[m]){
                if(target > nums[m] && target <= nums[e]) s = m + 1; // answer to the part of right sorted section
                else e = m - 1;
            }
        }
        return -1;   //if the answer is not found return -1
    }
}
