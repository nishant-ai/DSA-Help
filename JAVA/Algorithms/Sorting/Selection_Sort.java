package JAVA.Algorithms.Sorting;

import java.util.Arrays;

public class Selection_Sort {

    public static void selection_Sort(int [] arr ) {

        // we will start with selecting i-th element
        for (int i = 0; i < arr.length; i++) {

            // we will iterate and find the smaller element
            // than the i-th element and swap with it, so that
            // all elements towards the left-hand side are sorted
            // in increasing order. This process continues until
            // the length of sorted == length of given array.
            for( int j = i+1; j < arr.length; j++ ) {

                // Swapping the smaller element to bring it towards
                // left-hand side i.e., sorted side.
                if( arr[i] > arr[j] ){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        // End of sorting algorithm
    }

    public static void main(String[] args) {
        int [] arr = { 7, 1, -9, 0, 78, -14, -15, 99};
        System.out.println("Unsorted Array: " + Arrays.toString(arr));
        selection_Sort(arr);
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }
}

//  Output:
//  ------
//        Unsorted Array: [7, 1, -9, 0, 78, -14, -15, 99]
//        Sorted Array: [-15, -14, -9, 0, 1, 7, 78, 99]
