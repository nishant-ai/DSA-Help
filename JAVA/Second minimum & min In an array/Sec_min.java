/* This solution is done using best-case time complexity - O(logn) and the worst case time complixity is O(n) which is
      done by linear search

      THE SOLUTION IS DONE USING DIVIDE AND CONQUER TECHNIQUE
 */

import java.util.Scanner;

public class Sec_Min {

    public static int[] secmin(int [] arr,int left, int right) {

        int min;
        int sec;
        if(left == right)
        {
            sec = arr[left];
            min = arr[left];
        }

        else if(left+1 == right)
        {
            if (arr[left] < arr[right])
            {
                sec = arr[right];
                min = arr[left];
            }
            else
            {
                sec = arr[left];
                min = arr[right];
            }
        }
        else
        {
            // Divide the array in two same segments, afterthat conquer the segments to get the solution
            int mid = (right+left)/2;
            int [] leftarr = secmin(arr, left, mid);
            int [] rightarr = secmin(arr, mid+1, right);


            if (leftarr[1] > rightarr[1])
            {
                min = rightarr[1];
                sec = Math.min(leftarr[1], rightarr[0]);
            }
            else
            {
                min = leftarr[1];
                sec = Math.min(rightarr[1], leftarr[0]);
            }

        }
        int [] maxmin = {sec, min}; // this is a array of two elements
        return maxmin;

    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        int [] array = new int[n];
        for(int i=0; i<n; i++)
        {
            System.out.print("Enter the element - " + (i+1) + ": ");
            array[i] = sc.nextInt();
        }

        int [] res = secmin(array, 0, n-1);
        System.out.println("Minimum in array is: " + res[1] + "\n" + "Second Minimum in array is: " + res[0]);


    }
}