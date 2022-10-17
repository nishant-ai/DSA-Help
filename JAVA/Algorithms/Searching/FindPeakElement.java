package JAVA.Algorithms.Searching;

// PROBLEM LINK : https://leetcode.com/problems/find-peak-element/submissions
/*
The condition for sorted array can be added. 
*/

class FindPeakElement {
    public static void main(String [] args) {
        int [] nums = {1,2,3,1};
        int s = 0;
        int e = nums.length - 1;
        int m = -1;
        while(s < e){
            m = s + (e - s)/2;
            if(nums[m] < nums[m+1]) s = m+1;
            else e = m;
        }
        System.out.println(s);
    }
}
