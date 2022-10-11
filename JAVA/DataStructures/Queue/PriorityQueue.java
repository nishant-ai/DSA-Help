class QPA{
    int front[]=new int[20];
    int rear[]=new int[20];
    int pno[]=new int[20];
    int arr[][]=new int[20][20];
    QPA() {
        for (int i = 0; i < 20; i++) {
            front[i] = -1;
            rear[i] = -1;
            pno[i] = -1;
        }
    }
  

    void enqueue(int data,int priority){
        int i=0;
        while(true){
            if(pno[i]==priority || pno[i]==-1){
                if(!(front[i]==0 && rear[i]==19 || front[i]==rear[i]-1)){
                        break;
                }
            }
            i++;
        }
        pno[i]=priority;
        if(front[i]==-1 && rear[i]==-1){
            front[i]=0;
            rear[i]=0;
        }
        else if(rear[i]==19){
            rear[i]=0;
        }
        else{
            rear[i]++;
        }
        arr[i][rear[i]]=data;
    }

    // void dequeue(){
    //     int i=0;
    //     // while(true){
    //     //     if(pno[i]==-1 || (front[i]!=-1 && front[i]!=-1)){
    //     //         break;
    //     //     }
    //     //     i++;
    //     // }
    //     int min=minimum(){

    //     }
    //     while(pno[i]!=-1){
    //         if()
    //     }
    //     if(front[i]==rear[i]){
    //         front[i]=-1;
    //         rear[i]=-1;
    //     }
    //     else if(front[i]==19){
    //         front[i]=0;
    //     }
    //     else{
    //         front[i]++;
    //     }
    // }

    void dequeue(int priority){
        int i=0;
        while(true){
            if(pno[i]==-1 || pno[i]==priority){
                break;
            }
            i++;
        }
        if(front[i]==-1 && rear[i]==-1){
            return;
        }
        else if(front[i]==rear[i]){
            front[i]=-1;
            rear[i]=-1;
        }
        else if(front[i]==19){
            front[i]=0;
        }
        else{
            front[i]++;
        }
    }
    
    void display(int i){
        if(front[i]==-1 && rear[i]==-1){
            return;
        }
        else if(front[i]>rear[i]){
            for(int j=front[i];j<19;j++){
                System.out.print(arr[i][j]+" ");
            }
            for(int j=0;j<=rear[i];j++){
                System.out.print(arr[i][j]+" ");
            }
        }
        else{
            for(int j=front[i];j<=rear[i];j++){
                System.out.print(arr[i][j]+" ");
            }
        }
    }

    void print(int priority){
        int i=0;
        while(pno[i]!=-1){
            if(pno[i]==priority){
                display(i);
            }
            i++;
        }
        System.out.println();
    }
}
class QueuePriorityArray {
    public static void main(String[] args) {
        QPA x=new QPA();
        x.enqueue(19, 2);
        x.enqueue(232, 2);
        x.enqueue(23, 2);
        x.print(2);
        x.enqueue(45, 6);
        x.enqueue(23, 8);
        x.enqueue(12, 8);
        x.enqueue(13, 8);
        x.enqueue(15, 8);
        x.enqueue(17, 8);
        x.enqueue(112, 8);
        x.enqueue(32, 7);
        x.print(2);
        x.print(6);
        x.print(7);
        x.print(8);
        x.dequeue(2);
        x.dequeue(6);
        x.dequeue(7);
        x.dequeue(8);
        x.dequeue(8);
        x.print(2);
        x.print(6);
        x.print(7);
        x.print(8);
    }
}
