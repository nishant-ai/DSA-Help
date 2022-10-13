public class trap {
    public static int Rainwater(int height[]){
        int n=height.length;
        //calculate left max boundary -array
        int leftmax[]= new int[n];
        leftmax[0]=height[0];
        for(int i=1; i<n; i++){
            leftmax[i]=Math.max(height[i],leftmax[i-1]);
         }
        //calculate right max boundary -array
        int rightmax[]= new int[n];
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=Math.max(height[i],leftmax[i+1]);
        }
        int trappedwat=0;

        //loop
        for(int i=0;i<n;i++){
            //water = min(left max bound,right max bound)
           int watlevel= Math.min(leftmax[i],rightmax[i]);
           //trapped water = water - height[i]
           trappedwat += watlevel-height[i];
    }
    return trappedwat;
        }
        public static void main(String args[]){
        int height[]={4,2,0,6,3,2,5};
        System.out.println(Rainwater(height));
    } 
}

