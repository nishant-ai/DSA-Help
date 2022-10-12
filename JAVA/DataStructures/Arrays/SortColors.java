import java.util.*;

public class SortColors{
public static void sortColors(int[] nums) {
    int start=0;
    int end=nums.length-1;
    int i=0;
    while(i<=end){
        if(nums[i]==0){
            nums[i]=nums[start];
            nums[start]=0;
            start++;
        }
        else if(nums[i]==2){
            nums[i]=nums[end];
            nums[end]=2;
            end--;
            i--;
        }
        i++;
    }
}
public static void main(String args[]){
    int arr[]=new int[]{1,2,1,0,2,0,0,1,2,0};
    sortColors(arr);
    for(int i=0;i<arr.length;i++){
        System.out.println(arr[i]);
    }
}
}