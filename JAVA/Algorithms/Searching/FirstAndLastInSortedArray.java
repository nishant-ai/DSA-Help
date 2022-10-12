package JAVA.Algorithms.Searching;
import java.util.Arrays;

// PROBLEM LINK : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

/*
Explanation:
First check whether the array has the target by using simple binary search algorithm.
If yes then continue or print {-1, -1}.
An extra boolean variable check is added, if check is true means the algoithm is searching for the right index otherwise left index.
When the mid hits the target, mid is skipped to the right of left till there is no target left and it leads to the violation of
 the loop condition. 
Thus for the call of right index, right index will be end. In the call for left index the left index will be start.
*/

public class FirstAndLastInSortedArray{
    public static void main(String [] args){
        int [] nums = {5,7,7,8,8,10};
        int target = 8;
        if(binarysearch(nums, target)){ 
            int rightindex = helpersearch(nums, target, true);
            int leftindex = helpersearch(nums, target, false);
            System.out.println(Arrays.toString(new int[]{leftindex, rightindex}));
        }
        System.out.println(Arrays.toString(new int[]{-1, -1}));
    }
    public static int helpersearch(int [] nums, int target, boolean check){
        if(nums.length == 1) return 0;
        int s = 0; // Start index
        int e = nums.length - 1; // End index
        int m = -1; // Mid index
        while(s <= e){
            m = s + (e - s)/2;
            if(nums[m] > target) e = m - 1;
            else if(nums[m] < target) s = m + 1;
            else if(check) s = m + 1; // Skipping mid to right for the right index
            else e = m - 1; // Skipping mid to the left for left index
        }
        if(check) return e; 
        else return s;
    }
    //Normal Binary Search Algorithm
    public static boolean binarysearch(int [] nums, int target){
        int s = 0;
        int e = nums.length - 1;
        int m = -1;
        while(s <= e){
            m = s + (e - s)/2;
            if(nums[m] > target) e = m - 1;
            else if(nums[m] < target) s = m + 1;
            else return true;
        }
        return false;
    }
}
