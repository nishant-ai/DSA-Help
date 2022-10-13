public class linearsearch {
    public static int linea(int numbers[],int key){
        for(int i =0;i<numbers.length;i++){
            if(numbers[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String args[]){
        int numbers[]={2,4,6,8,10,12,14,16};
        int key=10;
        int index=linea(numbers,key);
        if(index==-1){
            System.out.print("not");
        }
        else{
            System.out.print("key is at index " + index);
        }
    }
}
