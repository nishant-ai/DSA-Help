import java.util.Scanner;
import java.util.Stack;

class PostfixToInfinix {
    static String convertToInfinix(String inp,Stack<String> st){
        for(int i=0;i<inp.length();i++){
            char c=inp.charAt(i);
            if(Character.isAlphabetic(c) || Character.isDigit(c)){
                st.push(Character.toString(c));
            }
            else{
                String a=st.pop();
                String b=st.pop();
                String exp='('+b+c+a+')';
                st.push(exp);
            }
        }
        String result=st.pop();
        return result;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String input=in.nextLine();
        Stack<String> stack=new Stack<>();
        String output=convertToInfinix(input, stack);
        System.out.println(output);
        in.close();
    }    
}
