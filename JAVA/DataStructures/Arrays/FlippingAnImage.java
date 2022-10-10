import java.util.Arrays;

public class FlippingAnImage {
    // Question Link:
    // https://leetcode.com/problems/flipping-an-image/
    public static void main(String[] args) {
        int[][] arr = {
                {1,1,0,0},
                {1,0,0,1},
                {0,1,1,1},
                {1,0,1,0},
        };
        int[][] ans = flipAndInvertImage(arr);
        for(int[] row: ans){
            System.out.println(Arrays.toString(row));
        }
    }

    static int[][] flipAndInvertImage(int[][] image) {
        for(int i=0; i<image.length; i++){
            int start = 0;
            int end = image[i].length-1;
            while(start < end){
                int temp = image[i][start];
                image[i][start] = image[i][end];
                image[i][end] = temp;
                start++;
                end--;
            }
            for(int j=0; j<image[i].length; j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                } else {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }

}