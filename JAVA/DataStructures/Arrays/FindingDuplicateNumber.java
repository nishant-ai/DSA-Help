import java.util.Scanner;

public class FindDuplicate { //{4,3,1,1,2} me [1,4] elements should only be there and since 1 is repeated it is our answer as per answer
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();//taking input of length of array by the user
        int[] a = new int[n + 1];//taking input of array
        for (int i = 0; i < a.length; i++) {
            a[i] = in.nextInt();
        }
        System.out.println(duplicate(a));
      
      static int duplicate(int[] a) {
        int i = 0;
        while (i < a.length) {
            if (a[i] != i + 1) {
                int correct = a[i] - 1;
                if (a[i] != a[correct]) {
                    int temp = a[correct];
                    a[correct] = a[i];
                    a[i] = temp;
                } else {
                    return a[i];
                }
            } else {
                i++;
            }
        }
        return -1;
   }
}
   
