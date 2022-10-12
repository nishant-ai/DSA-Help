import java.util.Arrays;

public class Insertion_Sort {
    public static void main(String[] args) {
        int[] arr=new int[]{10,9,8,7,6,5,4,3,2,1};
        System.out.println("Original Array: "+Arrays.toString(arr));
        // Insertion Sort
        sort(arr);
        System.out.println("Sorted Array  : "+Arrays.toString(arr));
    }

    // Insertion sort algorithm in Java
    public static void sort(int[] arr) {
        int key=0,i=0;
        for(int j=1;j<arr.length;j++){
            // taking a key element, to sort the previous elements
            key=arr[j];
            i=j-1;
            // comparing the key element with the previous elements
            // if true, the previous element replaces the next element
            // else the loop breaks
            while(i>=0 && arr[i]>key){
                arr[i+1]=arr[i];
                i=i-1;
            }
            // finally, if key is adjusted to the correct position,by replacing
            // the next element with the key element
            arr[i+1]=key;
        }
    }
}
