import java.util.Scanner;

/**
 * This is an implementation of the linear search algorithm.
 * @author @inforkgodara
 *
 */
public class LinearSearch {

    /**
     * Linear search implementation.
     * @param list the array to be searched.
     * @param search the element being looked for in the array.
     * @return the index at which the search element was first found or -1 if not found.
     */
    public static int search(int[] list, int search) {
        int length = list.length;
        for (int index = 0; index < length; index++) {
            if (list[index] == search) {
                return index;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        System.out.print("Enter length of list : ");
        Scanner scanner = new Scanner(System.in);

        int length = scanner.nextInt();
        int[] list = new int[length];

        for (int index = 0; index < length; index++) {
            list[index] = scanner.nextInt();
        }

        System.out.print("Enter element to search : ");
        int search = scanner.nextInt();
        int elementAt = search(list, search);

        String result = elementAt == -1 ? "Element not found." : "Element is at index " + elementAt;
        System.out.println(result);
    }
}
