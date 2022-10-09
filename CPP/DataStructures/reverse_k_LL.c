#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create(struct node *head,int i){
    struct node *ptr;
    ptr=(struct node *) malloc(sizeof(struct node));
    struct node *p;
    printf("Enter value[%d] of list:",i);
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
        p=head;
        return(head);
    }
    else{
        p->next=ptr;
        p=ptr;
        return(head);
    }
}
struct node *reverse_k(struct node *head,int k){
    int count=0;
    struct node *prev=NULL;
    struct node *curr=head;
    struct node *next=NULL;
    while(curr!=NULL&& count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=reverse_k(next,k);
    }
    return prev;
}
void print(struct node *ptr){
    int i=1;
    while(ptr!=NULL){
        printf("Value at Node[%d]:%d\n",i,ptr->data);
        i++;
        ptr=ptr->next;
    }
}
int main(){
    int k,i,n,data,pos;
    struct node *head=NULL;
    printf("Enter size of linked list:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        head=create(head,i+1);
    }
    print(head);

    printf("Value of k:");
    scanf("%d",&k);
    printf("Linked list after reverse:\n");
    head=reverse_k(head,k);
    print(head);
}