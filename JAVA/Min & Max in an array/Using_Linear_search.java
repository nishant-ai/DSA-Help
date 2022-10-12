package com.company;

public class Using_Linear_search {

    public static int[] min_max(int [] arr)
    {
        int max = arr[0];
        int min = arr[0];

        for(int i=0; i< arr.length; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
            if(arr[i]<min)
            {
                min = arr[i];
            }
        }
        int [] result = {max, min};
        return result;
    }

    public static void main(String[] args) {
        // Hi! Myself Ritwik Ganguly

        int [] array = new int[]{2, 1, -8, 8, 0, 12, 100258, -998, 258, 78};
        int [] res = min_max(array);

        System.out.println("Maximum in array is: " + res[0] + "\n" + "Minimum in array is: " + res[1]);

    }
}
