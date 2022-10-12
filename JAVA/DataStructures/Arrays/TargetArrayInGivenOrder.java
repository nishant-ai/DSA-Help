import java.util.ArrayList;
import java.util.Arrays;

public class TargetArrayInGivenOrder {
    // Question Link:
    // https://leetcode.com/problems/create-target-array-in-the-given-order/
    public static void main(String[] args) {
        int[] arr = {0,1,2,3,4};
        int[] index = {0,1,2,2,1};
        System.out.print(Arrays.toString(createTargetArray(arr, index)));
    }

    static int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer> temp = new ArrayList<Integer>();
        for(int i=0; i<nums.length; i++){
            temp.add(index[i],nums[i]);
        }
        int[] ans = new int[temp.size()];
        for(int i=0; i<ans.length; i++){
            ans[i] = temp.get(i);
        }
        return ans;
    }
}