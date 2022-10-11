import java.util.Stack;

class QueueUsingStack { //this is the deletion costly queue ie. deletion has n complexity
    static void enqueue(Stack<Integer> s1,Stack<Integer> s2,Integer data){
        s1.push(data);
    }

    static void dequeue(Stack<Integer> s1,Stack<Integer> s2){
        while(!s1.isEmpty()){
            s2.push(s1.pop());
        }
        s2.pop();
        while(!s2.isEmpty()){
            s1.push(s2.pop());
        }
    }

    static void print(Stack<Integer> s1){
        if(s1.isEmpty()){
            System.out.println("UnderFlow");
            return;
        }
        for(int i=0;i<s1.size();i++){ //this is the method to print elements of stacks without pop() function //as it is in collections tree
            System.out.print(s1.get(i)+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Stack<Integer> s1=new Stack<>();
        Stack<Integer> s2=new Stack<>();
        enqueue(s1, s2, 10);
        enqueue(s1, s2, 20);
        enqueue(s1, s2, 56);
        enqueue(s1, s2, 23);
        print(s1);
        enqueue(s1, s2, 45);
        enqueue(s1, s2, 43);
        enqueue(s1, s2, 78);
        enqueue(s1, s2, 45);
        print(s1);
        dequeue(s1, s2);
        dequeue(s1, s2);
        dequeue(s1, s2);
        print(s1);
        dequeue(s1, s2);
        dequeue(s1, s2);
        print(s1);
    }    
}
