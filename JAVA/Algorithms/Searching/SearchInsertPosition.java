package JAVA.Algorithms.Searching;

// PROBLEM LINK : https://leetcode.com/problems/search-insert-position
/*
Explanation:
If the target is present, the algorithm is simple Binary Search.
If the target is absent, when the loop condition violates the start always will be the position where target
 should be if it was present.
*/

class SearchInsertPosition {
    public static void main(String [] args) {
        int [] nums = {1,3,5,6};
        int target = 5;
        int s = 0;
        int e = nums.length - 1;
        int m = -1;
        while(s <= e){
            m = s + (e - s)/2;
            if(nums[m] > target) e = m-1;
            else if(nums[m] < target) s = m+1;
            else {
                System.out.println(m);
                return;
            }
        }
        System.out.println(s);
    }
}
