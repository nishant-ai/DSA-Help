public class HighestAltitude {
    // Question Link:
    // https://leetcode.com/problems/find-the-highest-altitude/
    public static void main(String[] args) {
        int[] arr = {-5,1,5,0,-7};
        System.out.print(largestAltitude(arr));
    }

    static int largestAltitude(int[] gain) {
        int max = 0;
        int sum = 0;
        for(int i=0; i<gain.length; i++){
            sum += gain[i];
            max = Math.max(sum,max);
        }
        return max;
    }

}