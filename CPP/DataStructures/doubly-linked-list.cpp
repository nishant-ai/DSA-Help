//Doubly Linked List
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node *prev;
};
int count = 0; //to count number of nodes
void track(){
	cout<<"\nTotal Count: "<<count<<endl;
}
Node *create_list(int n){
	Node *head = NULL;
	Node *p=NULL;
	for(int i=0;i<n;i++){
		if(i==0){
			head = new Node;
			p=head;
		}
		else{
			p->next=new Node;
			p=p->next;
		}
		cout<<"Enter data: ";cin>>p->data;
		count++;
	}
	p->next=NULL;
	return(head);
}

void display(Node *head){
	if(head==NULL){
		cout<<"List is empty"<<endl;
		return;
	}
	else{
		while(head!=NULL){
			cout<<head->data<<"->";
			head=head->next;
		}
	}
}

void insert_head(Node *&head,int val){
	Node *ptr = new Node;
	ptr->data=val;
	ptr->prev=NULL;
	ptr->next=head;
	if(head!=NULL){
		head->prev = ptr;
	}
	head = ptr;
	count++;
}

void insert_tail(Node *&head,int val){
	Node *ptr = new Node;
	Node *last = head;
	ptr->data=val;
	ptr->next=NULL;
	if(head == NULL){
		ptr->prev=NULL;
		head = ptr;
		return;
	}
	while(last->next!=NULL){
		last = last->next;
	}
	last->next=ptr;
	ptr->prev=last;
	count++;
}

void insertion(Node *&head,int pos,int val){
	Node *ptr=new Node;
	Node *temp=head;
	ptr->data = val;
	if(pos==0){
		insert_head(head,val);
	}
	else{
		for(int i=0;i<pos-1;i++){
			if(temp!=NULL){
				temp=temp->next;
			}
		}
		if(temp!=NULL){
			ptr->next=temp->next;
			ptr->prev=temp;
			temp->next=ptr;
			if(ptr->next!=NULL){
				ptr->next->prev=ptr;
			}
		}
		else{
			cout<<"Previous node is NULL\n";
		}
		count++;
	}
}

void delete_head(Node *&head){
	Node *ptr = new Node();
	if(head->next==NULL){
		head = NULL;
		delete(head);
	}
	else{
		ptr = head;
		head = head->next;
		head->prev=NULL;
		delete(ptr);
	}
	cout<<"Deleted\n";
	count--;
}

void delete_tail(Node *&head){
	Node *ptr = new Node();
	if(head->next==NULL){
		head = NULL;
		delete(head);
	}
	else{
		Node *temp = head;
		while(temp->next->next != NULL){
		temp = temp->next;
		}    
	    Node *lastNode = temp->next;
	    temp->next = NULL;
	    delete(lastNode);
	}
	cout<<"Deleted\n";
	count--;
}

void delete_pos(Node *&head,int pos){
	Node *temp = head,*ptr=NULL;
	if(pos==0){
		delete_head(head);
	}
	else if(pos==count){
		delete_tail(head);
	}
	else{
		for(int i=0;i<pos-1;i++){
			temp=temp->next;
		}
		ptr=temp;
		temp=temp->next;
		ptr->next=temp->next;
		delete temp;
		count--;	
	}
}

void reverse(Node *&head){
	int nv = (count/2);
	Node* next = head -> next;
	Node* previous = NULL;
	Node* current = head;
	//for(int i=0;i<nv;i++){
	//	cout<<current->data<<"->";
	//	current = current ->next;
	//}
	while(current != NULL){
		next = current -> next;
		current -> prev = next;
		current -> next = previous;
		previous = current;
		current = next;
	}
	head = previous;
}

void concatenate(Node *&head1, Node *&head2){
	Node *temp1=head1; Node *temp2=head2;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=temp2;
}

int main(){
	Node *head = NULL;
	Node *head1=NULL,*head2=NULL;
	int choice,n,pos;
	while(true){
		cout<<"-------MENU--------\n";
		cout<<"1.Create List\t2.Display\n3.Insert at Head\t4.Insert at tail\t5.Insertion\n";
		cout<<"6.Delete at head\t7.Delete at tail\t8.Deletion\n";
		cout<<"9.Count of list\t10.Reverse\t11.Concatenate\t12.EXIT\n";
		cout<<"\nEnter choice: ";cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter number of elements to insert: ";cin>>n;
				head = create_list(n);display(head);track();break;
			case 2:
				cout<<"Dsiplay:\n";display(head);track();break;
			case 3:
				cout<<"Enter value to insert at head: ";cin>>n;
				insert_head(head,n);display(head);track();break;
			case 4:
				cout<<"Enter value to insert at tail: ";cin>>n;
				insert_tail(head,n);display(head);track();break;
			case 5:
				cout<<"Enter value to insert: ";cin>>n;
				cout<<"Enter position to insert: ";cin>>pos;
				insertion(head,pos,n);display(head);track();break;
			case 6:
				cout<<"Deletion at head\n";
				delete_head(head);display(head);track();break;
			case 7:
				cout<<"Deletion at tail\n";
				delete_tail(head);display(head);track();break;
			case 8:
				cout<<"Enter the postion to delete from: ";cin>>pos;
				delete_pos(head,pos);display(head);track();break;
			case 9:
				track();break;
			case 10:
				cout<<"Reverse\n";reverse(head);display(head);cout<<endl;break;
			case 11:
				int num1,num2;
				cout<<"Enter number of elemets for list1: ";cin>>num1;
				cout<<"List 1\n"; head1 = create_list(num1); display(head1);
				cout<<"\nEnter number of elemets for list2: ";cin>>num2;
				cout<<"List 2\n"; head2 = create_list(num2); display(head2);
				cout<<"\nConcatenated list\n"; concatenate(head1, head2);
				display(head1);break;
			case 12: exit(0);
			default:
				cout<<"Enter valid option\n";break;
		}
	}
}
