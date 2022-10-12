// PROBLEM LINK : https://leetcode.com/problems/first-bad-version
// This problem extents a VersionControl class defined in the leetcode question.

/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int s = 1;
        int e = n;
        int m = -1;
        while(s <= e){
            m = s + (e - s)/2;
            if(isBadVersion(m)) e = m - 1;
            else s = m + 1;
        }
        return s;
    }
}
/*Why this is a binarysearch question ?
 * 1 ) This problem has a sorted array.
 * 2 ) We should search the first bad product so its a searching question.
 *How to solve ?
 * 1 ) Implement normal binarysearch algorithm.
 * 2 ) Whenever a product is bad, shift to the left ... until the array section wont have 
 * the bad product, in that case the condition for while loop terminates and start index will
 * point at first bad product index in the array.
 */
