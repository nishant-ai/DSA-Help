package JAVA.Algorithms.Searching;

// PROBLEM LINK : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array
/*
Explanation:
In rotated sorted array there are two sorted sections.
As the right section is lesser than the left section, the first element of the right section will be the minimum.
There are two conditions to find the merging point of the sections.
If the loop condition is violated, the array will be sorted. So the minimum will just be the forst element.
*/

class FindMinimumInRotatedSortedArray {
    public static void main(String [] args) {
        int [] nums = {3,4,5,1,2};
        int s = 0; // Start index
        int e = nums.length - 1; // End index
        int m = -1; // Mid index
        while(s < e){
            m = s + (e - s)/2;
            // Two conditions where the merging point of two sorted sections can be found
            if(e > m && nums[m] > nums[m+1]) {
                System.out.println(nums[m + 1]); 
                return;
            }
            else if(s < m && nums[m] < nums[m - 1]) {
                System.out.println(nums[m]);
                return;
            }
            else if(nums[m] < nums[e]) e = m - 1;
            else if(nums[s] < nums[m]) s = m;
        }
        System.out.println(nums[0]);
    }
}
