//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

public class evenDigits {
    public static void main(String[] args) {
        int[] arr = {12, 13, 10, 6, 8};
        System.out.println(even(arr));
    }

    // function to check whether a number contains even digits or not
    static int even(int[] arr){
        int flag = 0;
        for (int element : arr) {

     /*     The Integer. toString() method is used to convert int to string in java.
            this will count the length of every element and check if its even
            If the the length of an element is even the flag will increment  */
            if (Integer.toString(element).length() % 2 == 0) {
                flag++;
            }
        }
        // this line will execute after all the elements in the array have  been executed
        return flag;
    }
}