import java.util.*;
public class TwoSum {
    public static int[] twoSum(int[] nums, int target) {
        int [] res = new int[2];
        for(int i = 0; i < nums.length-1; i++) {
            for(int j = i+1; j < nums.length; j++) {
                if(nums[i] + nums [j] == target) {
                    res[0] = i;
                    res[1] = j;
                }
            }
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter elements for array: ");
        for(int i  = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the target:");
        int target = sc.nextInt();
        int res [] = twoSum(arr, target);
        System.out.println(Arrays.toString(res));
    }
}