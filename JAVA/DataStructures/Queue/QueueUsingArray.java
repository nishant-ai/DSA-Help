class QueueArr{
    int arr[]=new int[10];
    int front,rear;
    QueueArr(){
        front=-1;
        rear=-1;
    }

    void enque(int data){
        if(rear==arr.length-1){
            System.out.println("Overflow");
            return;
        }
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }
    
    void deque(){
        if(front==-1 && rear==-1){
            System.out.println("Underflow");
            return;
        }
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front++; //it will cause problem for insertion 
        }     //    so it can be solved by 1. deleting element at first but its complexity is n so not recommended 2.by using circular queue  
    }

    
    void print(){
        if(front==-1 && rear==-1){
            System.out.println("Underflow");
            return;
        }
        for(int i=front;i<=rear;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}

class QueueArray {
    public static void main(String[] args) {
        QueueArr q=new QueueArr();
        q.enque(1);
        q.enque(2);
        q.enque(3);
        q.enque(4);
        q.enque(5);
        q.enque(6);
        q.enque(7);
        q.enque(8);
        q.enque(9);
        q.enque(10);
        q.enque(11);
        q.enque(12);
        q.print();
        q.deque();
        q.deque();
        q.deque();
        q.deque();
        q.deque();
        q.deque();
        q.deque();
        q.deque();
        q.print();
        q.enque(2); 
        q.enque(3); //this is the problem we counter ie.overflow
        q.print();
    }
}
