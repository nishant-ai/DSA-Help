class Clist{
    int info;
    Clist start=null,ptr,next,n;
    Clist(){
        next=null;
    }
    Clist(int data){
        info=data;
        next=null;
    }
    void InsertBeg(int info){
        n=new Clist(info);
        if(start==null){
            start=n;
            n.next=start;
        }
        else{
            ptr=start;
            while(ptr.next!=start){
                ptr=ptr.next;
            }
            n.next=start;
            ptr.next=n;
            start=n;
        }
    }
    void InsertEnd(int info){
        n=new Clist(info);
        if(start==null){
            start=n;
            n.next=start;
        }
        else{
            ptr=start;
            while(ptr.next!=start){
                ptr=ptr.next;
            }
            n.next=start;
            ptr.next=n;
        }
    }
    
    void mid(int info,int index){
        if(start==null){
            System.out.println("Underflow");
        }
        else{
            if(index==0){
                InsertBeg(info);
            }
            else{
                n=new Clist(info);
                ptr=start;
                int count=1;
                while(count<index && ptr.next!=start){
                    ptr=ptr.next;
                    count++;
                }
                n.next=ptr.next;
                ptr.next=n;
            }
        }
    }
    void DelStart(){
        if(start==null){
            System.out.println("Underflow");
        }
        else if(start.next==start){
            start=null;
        }
        else{
            ptr=start;
            while(ptr.next!=start){
                ptr=ptr.next;
            }
            ptr.next=start.next;
            start=ptr.next;
        }
    }

    void DelLast(){
        if(start==null){
            System.out.println("Underflow");
        }
        else if(start.next==start){
            start=null;
        }
        else{
            ptr=start;
            while(ptr.next.next!=start){
                ptr=ptr.next;
            }
            ptr.next=start;
        }
    } 
    void print(){
        if(start==null){
            System.out.println("List is Empty");
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

    Clist splitmiddle(){ //splitting middle
        Clist start2=null;
        if(start==null){
            System.out.println("Underflow");
        }
        else if(start.next==start){
            System.out.println("Invalid");
        }
        else{
            Clist t=start;
            Clist r=start;
            ptr=start;
            
           do{
                t=t.next;
                r=r.next.next;
            } while(r.next!=start && r.next.next!=start);
            if(r.next.next==start){
                r=r.next;
                t=t.next;
            }
            r.next=t.next;
            start2=t.next;
            t.next=start;
        }
        return start2;
    }

    void FindLoop(){
        Clist t=start;
        Clist r=start;
        while(r!=null && r.next!=null ){
            t=t.next; 
            r=r.next.next;
            if(t==r){
                System.out.println("Loop Exist");
                break;
             }
          }
     }
    }
    
class CircularLinkedList {
    public static void main(String[] args) {
        Clist x=new Clist();
        x.InsertEnd(10);
        x.InsertEnd(20);
        x.InsertEnd(30);
        x.InsertEnd(12);
        x.InsertEnd(67);
        x.InsertEnd(78);
        x.InsertEnd(567);
        x.InsertEnd(34);
        x.print();
        x.InsertBeg(11);
        x.InsertBeg(23);
        x.InsertBeg(45);
        x.InsertBeg(32);
        x.InsertBeg(456);
        x.InsertBeg(54);
        x.InsertEnd(123);
        x.InsertBeg(0);
        x.print();
        x.mid(89, 2);
        x.mid(5, 10);
        x.mid(50, 677);
        x.print();
        x.DelLast();
        x.print();
        x.DelStart();
        x.print();
        x.splitmiddle();
        x.print();
        x.FindLoop();
    }
}