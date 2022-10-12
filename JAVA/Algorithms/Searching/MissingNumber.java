package JAVA.Algorithms.Searching;

// PROBLEM LINK : https://leetcode.com/problems/missing-number
/*
Explanation:
The property of xor function is that, if we take xor of same numbers the result will be zero.
By taking the xor of all the elements and indices will give the missing number xor size of the array.
To avoid the size of the array, result is initialized by the size, so that both gets cancelled out.
*/

public class MissingNumber{
  public static void main(String [] args) {
    int [] nums = {9,6,4,2,3,5,7,0,1};
    int result = nums.length;
    for(int i=0; i<nums.length; i++){
        result ^= i;
        result ^= nums[i];
    }
    System.out.println(result);
  }
}
