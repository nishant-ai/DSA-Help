package XtraQuestions.StringsArrayMixed;
public class RotateArrayByK {
    public static void main(String[] args) {
        int[] arr = {1,2,3,5,6};
		
// 		int k = -2;
		
		for(int i=0;i<arr.length; i++){
		    rotate(arr,1);
		    display(arr);
		    
		    int sum = 0;
		    for(int j=0; j<arr.length; j++){
		        sum = sum + j*arr[j];
		    }
		    
		    System.out.print(" " + sum);
		    System.out.println();
		}
		
    }

    public static void display(int[] arr){
	    for(int val: arr){
		    System.out.print(val + " ");
		}
	}
	
	public static void reverse(int[] arr, int l, int r){
	    
	    while(l<r){
	        int temp = arr[l];
	        arr[l] = arr[r];
	        arr[r] = temp;
	        l++;
	        r--;
	    }
	}
	
	public static void rotate(int[] arr, int k){
	    
	    k = k%arr.length;
	    
	    if(k<0){
	        k = k + arr.length;
	    }
	    
	   // p1
	   reverse(arr,0,arr.length-k-1);
	   reverse(arr,arr.length-k,arr.length-1);
	   
	   reverse(arr, 0, arr.length-1);
	}
}


