package com.company;

import java.util.Scanner;

public class Using_Div_and_Con {
    static int[] findminmax(int [] arr, int left, int right)
    {
        int max, min;
        if(left == right)
        {
            max = arr[left];
            min = arr[left];
        }

        else if(left+1 == right)
        {
            if (arr[left] < arr[right])
            {
                max = arr[right];
                min = arr[left];
            }
            else
            {
                max = arr[left];
                min = arr[right];
            }
        }

        else
        {

            int mid = (left+right)/2;
            int [] leftarr = findminmax(arr, left, mid);
            int [] rightarr = findminmax(arr, mid+1, right);


            max = Math.max(leftarr[0], rightarr[0]);

            min = Math.min(leftarr[1], rightarr[1]);
        }

        int [] maxmin = {max, min};
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

        int [] res = findminmax(array, 0, n-1);
        System.out.println("Maximum in array is: " + res[0] + "\n" + "Minimum in array is: " + res[1]);

    }
}