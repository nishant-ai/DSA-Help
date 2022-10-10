public class RichestCustomerWealth {
    // Question Link:
    // https://leetcode.com/problems/richest-customer-wealth/
    public static void main(String[] args) {
        int[][] arr = {
                {1,2,3},
                {4,5,6},
        };
        System.out.println(maximumWealth(arr));
    }

    static int maximumWealth(int[][] accounts) {

        /*
        Method-1:
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < accounts.length; i++) {
            for(int j = 0; j < accounts[i].length; j++){
                sum += accounts[i][j];
            }
            ans = Math.max(sum,ans);
            sum = 0;
        }
        return ans;
        */

//        Method-2:
        int maxSum = 0;
        for(int i = 0; i < accounts.length; i++) {
            int rowSum = 0;
            for(int j = 0; j < accounts[i].length; j++){
                rowSum += accounts[i][j];
            }
            if(rowSum > maxSum) {
                maxSum = rowSum;
            }
        }
        return maxSum;
    }

}