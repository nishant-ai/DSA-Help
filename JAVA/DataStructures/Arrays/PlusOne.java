
import java.util.Arrays;


//https://leetcode.com/problems/plus-one/

public class PlusOne {
    public static void main(String[] args) {
        int[] target = {8,9,9};
        System.out.println(Arrays.toString(plusOne(target)));
    }
    public static int[] plusOne(int[] digits) {
        //int last = digits[digits.length - 1];

        for (int i = digits.length - 1; i >= 0; i--) {
            if(digits[i] != 9){
                digits[i]++;
                break;
            }
            else{
                digits[i] = 0;
            }

        }
        if(digits[0] == 0){
            int[] arr = new int[digits.length+1];
            arr[0] = 1;
            return arr;
        }
        return digits;
    }
}
