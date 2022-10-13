package JAVA.Algorithms.Sorting;

import java.util.Arrays;

public class CyclicSort {

    // Cyclic sort is one of the effective sorting algorithm.
    // There only one restriction to implement this algorithm and that is,
    // the input data set has to be ranging from 0 to 'n' elements (or) 1 to 'n' elements.
    // the below algorithm is based on the data set ranging 0 to 'n' elements.

    // This sorting algorithm works on the key principle/condition i.e., 'value' - 1 == 'index' ( which is used here )
    // (or) 'value' == 'index' ( where the elements of the data set ranging from 0 to 'n' ).
    // The keyword 'condition' ( here in explanation ) will be referring to this condition.

    // This algorithm works as follows:
    // We begin by setting the 'index' to zero, and then we will verify if 'value'-1 == 'index' is true or not.
  
    // if the 'condition' returns 'false'. ( which means the element is not in its rightful position ) Then,
        // We have to take the 'value' at 'index' and swap it with the element at 'value'-1 index.
        // and then we go back to verify the 'condition' WITHOUT INCREMENTING 'index'.
        // by doing this, the 'value' will be sorted (or) will be placed in its rightful position.
  
    // if the 'condition' returns 'ture'. Then,
        // We will increment the 'index' to check whether the next index is sorted or not.
        // We increment the 'index' because the 'value' at 'index' is sorted (or) in its rightful place.
  
    public static void cyclicSort ( int [] arr ){

        // Initializing index with zero
        int index = 0;

        // we'll iterate throughout all 'n' element
        // to make sure all elements are sorted.
        while( index < arr.length ){

            // sorting arr[index] to 'value' to
            // verify the 'condition'.
            int value = arr[index];

            // check whether if the 'value' is in
            // its rightful place or not.
            if( value-1 == index ) {
                ++index;
            }

            // swapping when the 'condition' fails,
            else {
                int temp = arr[index];
                arr[index] = arr[value-1];
                arr[value-1] = temp;
            }
            // By End of if-else statement,
            // One unique 'value' is getting sorted.
        }
        // End of Algorithm.
    }

    public static void main(String[] args) {
        int [] arr = { 4, 1, 7, 5, 2, 6, 3 };
        System.out.println("Unsorted Array: " + Arrays.toString(arr) );
        cyclicSort(arr);
        System.out.println("Sorted Array: " + Arrays.toString(arr) );
    }
}

//  Output :
//  -------
//        Unsorted Array: [4, 1, 7, 5, 2, 6, 3]
//        Sorted Array: [1, 2, 3, 4, 5, 6, 7]
