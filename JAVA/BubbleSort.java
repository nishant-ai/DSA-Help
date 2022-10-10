public class BubbleSort {

    //bubble sort algorithm in java
    static void bubbleSort(int numbers[]) {
        int i, j, temp;
        int numberOfElements = numbers.length;
        for (i = 0; i < (numberOfElements); i++) {
            for (j = numberOfElements -1; j > i; j--) {
                if (numbers[j] < numbers[j - 1]) {
                    temp = numbers[j];
                    numbers[j] = numbers[j - 1];
                    numbers[j - 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = { -3, 4, 7,112, 3, 6, 9, 15, 9, 2, 114};
        int n = arr.length;

        System.out.println("Array Before Bubble Sort");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        bubbleSort(arr);
        System.out.println("\n\nArray After Bubble Sort");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }


    }
}
