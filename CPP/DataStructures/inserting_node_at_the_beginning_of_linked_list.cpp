#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

void create(struct node* head,int data){
	struct node* four=NULL;
	four=(struct node*)malloc(sizeof(struct node));
	four->data=data;
	four->next=head;
//	four=head;
	printf("value of data at node 0 is : %d\n",four->data);
	
}


void print(struct node* head){
	if(head==NULL)
	printf("linked list empty");
	struct node* ptr=NULL;
	ptr=head;
	int i=0;
	while(ptr!=NULL){
		i++;
		printf("value of data at node %d is : %d\n",i,ptr->data);
		ptr=ptr->next;
	}
	
}


int main(){
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third= NULL;
	 
	head= (struct node*)malloc(sizeof(struct node));
	second =(struct node*)malloc(sizeof(struct node));
	third= (struct node*)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	create(head,4);
	
	print(head);
}