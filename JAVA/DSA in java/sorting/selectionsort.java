public class selectionsort {
    public static void printarr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void select(int arr[]){
        for(int i=0;i<arr.length-1;i++){
            int minpos=i;
            for(int j=i+1;j<arr.length;j++){
                if(arr[minpos]>arr[j]){
                    minpos=j;
                }
            }
            int temp=arr[minpos];
                    arr[minpos]=arr[i];
                    arr[i]=temp;
        }
}
    public static void main(String args[]){
    int arr[] = {1,4,1,3,2,4,3,7};
    select(arr);
    
    printarr(arr);
    }
}
