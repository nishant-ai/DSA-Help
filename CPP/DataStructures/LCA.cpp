#include<iostream>
using namespace std;
 class Node {
    public : 
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }

        ~Node() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

Node* LCAInaBST(Node* root, Node* P, Node* Q)
{
	//base case
    if(root == NULL){
        return NULL;
    }
    
    if(root -> data < P -> data && root ->data < Q -> data)
        return LCAInaBST(root -> right,P,Q);
    
    if(root -> data > P -> data && root -> data > Q -> data)
        return LCAInaBST(root -> left,P,Q);
    
    return root;
}
