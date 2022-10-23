import java.util.*;
public class binarysearch {
    public static int bin(int numbers[],int key){
        int start=0,end = numbers.length-1;
        
        while(start<=end){
            int mid=(start+end)/2;
            if(numbers[mid]==key){
                return mid;
            }
            if(numbers[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    public static void main(String args[]){
        int numbers[] = {1,2,6,3,5};
        int key=6;
        System.out.println("nu is largest : " + bin(numbers,key));
    }
}
