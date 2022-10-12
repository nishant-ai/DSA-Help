#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}*first;
void create(int a[],int n){
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=a[0];
	first->prev=NULL;
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++){
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		t->prev=last;
		last=t;
	}
	
}
void display(struct Node *p){
	while(p){
		printf("%5d",p->data);
		p=p->next;
	}
}
void insert(int pos,int x){
	struct Node *t,*p=first;
	t=(struct Node *)malloc(sizeof(struct Node));
	t->data=x;
	if(pos==0){
		if(first==NULL){
			first=t;
			t->prev=NULL;
			t->next=NULL;	
		}else{
			t->prev=NULL;
			t->next=first;
			first->prev=t;
			first=t;
		}
	}
	else{
		for(int i=0;i<pos-1;i++){
			p=p->next;
		}
		t->next=p->next;
		t->prev=p;
		if(p->next!=NULL){
			p->next->prev=t;
		}
		p->next=t;
	}
}
int Delete(int pos){
	struct Node *p=first;
	int x;
	if(pos==1){
		first=first->next;
		x=p->data;
		delete p;
		if(first){
			first->prev=NULL;
		}
	}
	else{
		for(int i=0;i<pos-1;i++){
			p=p->next;
		}
		p->prev->next=p->next;
		if(p->next){
			p->next->prev=p->prev;
		}
		x=p->data;
		delete p;
	}
	return x;
}
void reverse(struct Node *p){
	struct Node *temp;
	while(p){
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if(p!=NULL && p->next==NULL){
			first=p;
		}
	}
}
int mid(struct Node *p){
	struct Node *q=first;
	while(q){
		q=q->next;
		if(q){
			q=q->next;
		}
		if(q){
			p=p->next;
		}
	}
	return p->data;
}
int main(){
	int n,pos,x;
	printf("Enter the number of Nodes: ");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	printf("Enter the data for nodes:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	create(a,n);
	display(first);
	printf("\nEnter the data and position to insert: ");
	scanf("%d%d",&x,&pos);
	insert(pos,x);
	display(first);
	printf("\nEnter the position to delete: ");
	scanf("%d",&pos);
	printf("%d\n",Delete(pos));
	display(first);
	reverse(first);
	printf("\nDisplaying the reversed list:\n");
	display(first);
	printf("\nmiddle of linked list is: %d",mid(first));
	
	return 0;
}
