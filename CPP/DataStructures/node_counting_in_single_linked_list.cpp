#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

void node_count(struct node* head){
	int count=0;
	if(head==NULL)
	printf("linked list are empty");
	struct node* ptr=NULL;
	ptr=head;
	while(ptr!=NULL){
		count++;
		ptr=ptr->next;
	}
	printf("number of node is %d",count);
}

int main(){
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third= NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	
	head->data=4;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=1;
	third->next=NULL;
	node_count(head);
	
    return 0;
}