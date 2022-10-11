#include<iostream> //Decleration of preprocessor directive
using namespace std;
struct queue{    //creation of structure for a queue
	int size;
	int front;
	int rear;
	int *Q;
};
void create_queue(struct queue *q)  //creation of a queue
{ q->front=q->rear=-1;
q->Q=new int[q->size];
}
void insert_queue(struct queue *q,int x) //insertion of elements in queue
{ if(q->rear==q->size-1)
   {cout<<"Queue is Empty"<<endl;
   }
   else 
  {
    q->rear++;
   q->Q[q->rear]=x;
}
}
void delete_queue(struct queue *q) //deletion of elements in queue
{ int p;
if(q->front==q->rear)
{ cout<<"Queue is Empty"<<endl;
}
else{
	 p=q->Q[++q->front];
	for(int i=q->front;i<q->rear;i++)
	{ q->Q[i]=q->Q[i+1];
	}
	cout<<"Deleted element is: "<<p<<endl;
	q->rear--;
}}
bool isempty_queue(struct queue *q) //check whether queue is empty or not
{ if(q->rear==q->front)
return 1;
else 
return 0;
}
bool isfull_queue(struct queue *q)  //check whether queue is full
{ if(q->rear==q->size-1)
return 1;
else 
return 0;}
void display(struct queue *q)  //used to display queue
{ if(isempty_queue(q))
{ cout<<"Queue is Empty"<<endl;
}
else{
	cout<<"The queue listed is: ";
	for(int i=q->front+1;i<=q->rear;i++)
	{ cout<<q->Q[i]<<" ";
	}
}
}
int main()
{ struct queue a;
cout<<"Enter the size of queue: "<<endl;
cin>>a.size;
create_queue(&a);
int b;

cout<<"Enter 0 to exit"<<endl<<"Enter 1 to enqueue elements"<<endl<<"Enter 2 to dequeue elements"<<endl<<"Enter 3 to check whether queue is full or empty"<<endl<<"Enter 4 to display queue elements"<<endl;
cin>>b;
while(b){
switch(b)
{ case 0:
	break;
	case 1:
		{ int d;
		cout<<"Enter the value you want to insert"<<endl;
		cin>>d;
		insert_queue(&a,d);
		break;
		}
		case 2:
			{ delete_queue(&a);
			break;
			}
			case 3:
				{
				if(isfull_queue(&a))
				 cout<<"Queue is full"<<endl;
				else if(isempty_queue(&a))
                 cout<<"Queue is Empty"<<endl;
				 else
				 cout<<"Queue is moderately filled"<<endl;				
                    break; }
                    case 4:
                    	{ display(&a);
                    	break;
						}
						default:{
							cout<<"Invalid choice"<<endl;
							break;
						}
}
cout<<"Enter 0 to exit"<<endl<<"Enter 1 to enqueue elements"<<endl<<"Enter 2 to dequeue elements"<<endl<<"Enter 3 to check whether queue is full or empty"<<endl<<"Enter 4 to display queue elements"<<endl;
cin>>b;}
return 0;
}

