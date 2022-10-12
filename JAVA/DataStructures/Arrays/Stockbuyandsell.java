import java.util.*;

public class Stockbuyandsell {
    public static int maxProfit(int[] prices) {
        int buy = prices[0];
        int sell = prices[0];
        int ans = 0;
        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < buy) {
                sell = prices[i];
                buy = prices[i];
            }
            if (prices[i] > sell) {
                sell = prices[i];
            }
            if (sell - buy > ans)
                ans = sell - buy;
        }
        return (ans);
    }

    public static void main(String args[]) {
        int arr[] = new int[] { 7, 1, 5, 3, 6, 4 };
        int ans = maxProfit(arr);
        System.out.println(ans);
    }
}