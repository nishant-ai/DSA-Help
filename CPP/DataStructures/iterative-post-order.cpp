//Post order iterative
#include<iostream>
#include<stack>
using namespace std;
class node{
	public:
		int data;
		node *right;
		node *left;
		node(int value){
			data=value;
			left=NULL;
			right=NULL;
		}
};

void postorder_iterative(node* root){
	node* current = root;
	stack<node*> s1,s2;
	s1.push(root);

	cout<<"The post order traversal is: -\n";
	while(current != NULL){
		current = s1.top();
		s1.pop();
		s2.push(current);
		if(current -> left != NULL)
			s1.push(current->left);
		if(current -> right != NULL)
			s1.push(current->right);
		if(s1.empty())
			current = NULL;
	}
	while(!s2.empty()){
		current = s2.top();
		s2.pop();
		cout<<current->data<<"-";
	}
}

int main(){
	node *root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	postorder_iterative(root);
	return 0;
}
