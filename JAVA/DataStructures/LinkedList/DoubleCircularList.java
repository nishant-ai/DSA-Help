class DCL{
    int info;
    DCL start,next,prev,ptr;
    DCL(){
        this.start=null;
    }
    DCL(int info){
        this.next=null;
        this.prev=null;
        this.info=info;
    }
    void add(int info){
        DCL n=new DCL(info);
        if(start==null){
            start=n;
            start.prev=n;
            n.next=start;
        }else{
            ptr=start.prev;
            n.prev=ptr;
            n.next=start;
            ptr.next=n;
            start.prev=n;
        }
    }
    void push(int info){
        DCL n=new DCL(info);
        if(start==null){
            start=n;
            start.prev=n;
            n.next=start;
        }else{
            ptr=start.prev;
            n.prev=ptr;
            n.next=start;
            ptr.next=n;
            start.prev=n;
            start=n;
        }
    }
    void pop(){
        if(start==null){
            System.out.println("Underflow");
            return;
        }
        else if(start.next==start){
            start=null;
            return;
        }
        else{
            ptr=start;
            DCL last=ptr.prev;
            last.next=ptr.next;
            ptr.next.prev=last;
            start=start.next;
            ptr.next=null;
            ptr.prev=null;
        }
    }
    void delete(){
        if(start==null){
            System.out.println("Underflow");
            return;
        }
        else if(start.next==start){
            start=null;
            return;
        }
        else{
            DCL last=start.prev;
            last.prev.next=start;
            start.prev=last.prev;
            last.next=null;
            last.prev=null;
        }        
    }
    void print(){
        if(start==null){
            System.out.println("Empty");
        }
        else{
            ptr=start;
            do{
                System.out.print(ptr.info+" ");
                ptr=ptr.next;
            }while(ptr!=start);
        }
        System.out.println();
    }
}
class DoubleCircularLinkedList {
    public static void main(String[] args) {
        DCL li=new DCL();
        li.add(29);
        li.add(45);
        li.add(67);
        li.print();
        li.push(90);
        li.push(32);
        li.push(35);
        li.print();
        li.pop();
        li.pop();
        li.print();
        li.delete();
        li.delete();
        li.print();
    }    
}
