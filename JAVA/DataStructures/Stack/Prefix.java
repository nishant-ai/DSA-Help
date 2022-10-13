import java.util.Scanner;
class Stack_Array_ { 
    char arr[] = new char[100];
    int top = -1;

    void push(char info) {
        if (top == arr.length - 1) {
            System.out.println("OverFlow");
            return;
        }
        top += 1;
        arr[top] = info;
    }

    void pop() {
        if (top == -1) {
            System.out.println("underflow");
        } else {
            top = top - 1;
        }
    }

    int peek() { 
        if (top == -1) {
            System.out.println("UnderFlow");
            return -1;
        }
        System.out.println(arr[top]);
        return arr[top];
    }
}
class Prefix {
    static int order(char x){
        if(x=='^'){
            return 4;
        }
        else if(x=='%'){
            return 3;
        }
        else if(x=='*' || x=='/'){
            return 2;
        }
        else if(x=='-' || x=='+'){
            return 1;
        }
        else{
            return 0;
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Stack_Array_ st = new Stack_Array_();
        st.push(')');
        String inp = in.nextLine(); 
        inp='('+inp+')';
        inp=new StringBuilder(inp).reverse().toString();
        String out = "";
        int i = 0;
        while (st.top != -1 || i<inp.length()){
            char c;
            if (i < inp.length()) {
                c = inp.charAt(i);
            } else {
                c = '(';
            }
            if (Character.isAlphabetic(c)) {
                out += c;
            } 
            else if (c == ')') {
                st.push(c);
            }
            else if (c == '(') {
                while (st.arr[st.top]!=')') {
                    char temp=st.arr[st.top];
                    st.pop();
                    out = out + temp;
                }
                st.pop();
            } 
            else{
                int x = order(c);
                int y = order(st.arr[st.top]);
                if (x >= y) {
                    st.push(c);
                } else if (x < y) {
                    do {
                        char temp=st.arr[st.top];
                        st.pop();
                        out=out+temp;
                        x = order(c);
                        y = order(st.arr[st.top]);
                    } while (x < y);
                    st.push(c);
                }
            }
            i++;
        } 
        System.out.println(new StringBuilder(out).reverse());
        in.close();
    }
}
