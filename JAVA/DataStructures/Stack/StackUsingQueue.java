import java.util.*;
  
class StackQueue {
    Queue<Integer> q1 = new LinkedList<>(), q2 = new LinkedList<>();
    int curr_size;
  
    public StackQueue()
    {
        curr_size = 0;
    }
  
    void remove()
    {
        if (q1.isEmpty())
            return;
  
        // Leave one element in q1 and
        // push others in q2.
        while (q1.size() != 1) {
            q2.add(q1.peek());
            q1.remove();
        }
  
        // Pop the only left element
        // from q1
        q1.remove();
        curr_size--;
  
        // swap the names of two queues
        Queue<Integer> q = q1;
        q1 = q2;
        q2 = q;
    }
  
    void add(int x)
    {
        q1.add(x);
        curr_size++;
    }
  
    int top()
    {
        if (q1.isEmpty())
            return -1;
  
        while (q1.size() != 1) {
            q2.add(q1.peek());
            q1.remove();
        }
  
        // last pushed element
        int temp = q1.peek();
  
        // to empty the auxiliary queue after
        // last operation
        q1.remove();
  
        // push last element to q2
        q2.add(temp);
  
        // swap the two queues names
        Queue<Integer> q = q1;
        q1 = q2;
        q2 = q;
        return temp;
    }
  
    int size()
    {
        return curr_size;
    }
  
    // Driver code
    public static void main(String[] args)
    {
        StackQueue s = new StackQueue();
        s.add(1);
        s.add(2);
        s.add(3);
        s.add(4);
  
        System.out.println("current size: " + s.size());
        System.out.println(s.top());
        s.remove();
        System.out.println(s.top());
        s.remove();
        System.out.println(s.top());
        System.out.println("current size: " + s.size());
    }
}