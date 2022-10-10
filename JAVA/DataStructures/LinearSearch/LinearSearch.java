public class linearSearch {
    public static void main(String[] args) {
        int[] arr = {12, 13, 10, 6, 8};
        int target = 12;

//        System.out.println(search(arr, target));
        System.out.println(search2(arr, target));
    }

//  Search the target element and  return true and false
    static Boolean search2(int[] arr, int target){
        // If the length of array is zero return false
        if (arr.length == 0){
            return false;
        }

// traversing and comparing every element with the target element
        for (int i = 0; i < arr.length; i++) {
            int element = arr[i];
            if (element == target)
                return true;
        }
        // this line will execute if the target element was not found in the array
        return false;
    }

//  Search the target element and  return -1 if the element's 
//  length was zero or if itwas not found
    static int search(int[] arr, int target){
        if (arr.length == 0){
            return -1;
        }

        for (int i = 0; i < arr.length; i++) {
            int element = arr[i];
            if (element == target)
                return i;
        }
        return -1;
    }
}