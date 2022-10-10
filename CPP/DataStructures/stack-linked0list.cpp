#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct stack{
	int data;
	stack *next;
};
stack *top=NULL;
void push(){
	stack *ptr = new stack;
	if(ptr==NULL){
		cout<<"Overflow";
	}
	cout<<"Enter value to push: ";cin>>ptr->data;
	ptr->next=top;
	top=ptr;
}
void pop(){
	stack *ptr=top;
	if(top==NULL){
		cout<<"Underflow";
	}
	cout<<"Deleted Element: "<<ptr->data<<endl;
	top=top->next;
	free(ptr);
}
void display(){
	stack *ptr=top;
	while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	int yes=1,ch;
	while(yes==1){
		cout<<"MENU\n1.Insert\t2.Delete\t3.Display\t4.EXIT\n";
		cout<<"Enter choice: ";cin>>ch;
		switch(ch){
			case 1:
				push();display();break;
			case 2:
				pop();display();break;
			case 3:
				display();break;
			case 4:
				exit(0);break;
			default:
				cout<<"Not valid option\n";break;
		}
	}
	return 0;
}
