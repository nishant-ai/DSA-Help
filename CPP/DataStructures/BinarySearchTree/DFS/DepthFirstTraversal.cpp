// C/C++ PROGRAM TO IMPLEMENT DEPTH FIRST TRAVERSAL OF BINARY SEARCH TREE USING STACK
// by Hamza Aziz


#include <iostream>
using namespace std;

// Defining structure of Binary Search Tree
typedef struct node
{
  struct node *left;    // Left Child
  bool visited;         // Boolean variable to mark if the node is visited previously or not
  int data;             // Value stored in data field of node
  struct node *right;   // Right Child
}
node;
node *tree;

// Defining structure of Stack (implementation using Linked List)
typedef struct stack
{
  node *data;           // Pointer variable to store the address of the node being visited in the BST
  struct stack *next;   // Pointer for next member present in Stack (top of stack)
}
stack;
stack *Top = NULL, *A;


// Function to check whether the stack is empty or not
bool isEmpty()
{
    if (Top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function to perform push() operation of Stack
void push(node *x)
{
    // if stack is empty ...
    if(isEmpty() == true)
    {
        Top = (stack *)malloc(sizeof(stack));   // Allocate memory for Top node of Stack
        Top->data = x;                          // Assign x (address of the node in BST neing visited) to Top's data field
        Top->next = NULL;                       // Assign NULL to Top's next field
    }
    // else if stack is not empty ...
    else
    {
        A = (stack *)malloc(sizeof(stack));     // Allocate memory for next top node of stack
        A->data = x;                            // Assign x (address of the node in BST neing visited) to Top's data field
        A->next = Top;                          // Link this top node to prvious top node of stack
        Top = A;                                // Upgrade Top Node of Stack to the present top node
    }
}

// Function to perform pop() operation of stack
node *pop()
{
    node *x;
    if(isEmpty() == true)
    {
        printf("\nThe Binary Tree has been processed completely");      // if stack is empty print a message stating that it is empty
    }
    // else if stack is not empty
    else
    {
        A = Top;            // Store Top Node of Stack (this is the node of the tree whose data is printed while DFS) into a variable A
        x = A->data;        // Store Top Node's data into a pointer variable called x
        Top = Top->next;    // Degrade top to one level down in the stack
        free(A);            // Free memory for the top which is being prnted
    }
    return x;   // return the address which was stored in x
}

// Function to create an empty tree
void create_tree(node *tree)
{
  tree = NULL;
}

// Function to insert element in BST
node *insertElement(node *tree, int val)
{
  node *ptr, *nodeptr, *parentptr;      // Pointer variable for node being created, Pointer variable for node being visited, Pointer variable for parent of current node being visted respectively
  ptr = (node*)malloc(sizeof(node));    // Allocating memory for creating node
  ptr->data = val;                      // Assigning value to the node being created
  ptr->visited = false;                 // Initializing false to every node being created as no node is visited yet
  ptr->left = NULL;                     // Initializing NULL to left child
  ptr->right = NULL;                    // Initializing NULL to right child

  // if tree is empty, create root node
  if(tree == NULL)
  {
    tree = ptr;
    tree->left = NULL;
    tree->right = NULL;
  }
  // else ...
  else
  {
    parentptr = NULL;
    nodeptr = tree;
    while(nodeptr != NULL)
    {
      parentptr = nodeptr;
      if(val < nodeptr->data)
        nodeptr = nodeptr->left;        // if inserted value is less than value of parent node, create left child
      else
        nodeptr = nodeptr->right;       // else if inserted value is greater than value of parent node, create right child
    }
    if(val < parentptr->data)
      parentptr->left = ptr;            // if inserted value is less than value of parent node, mark left child as ptr
    else
      parentptr->right = ptr;           // else if inserted value is greater than value of parent node, mark right child as ptr
  }
  return tree;
}

// Function to implement Depth First Traversal
void DepthFirstTraversal(node *root)
{
  node *current;
  if (root != NULL)
  {
    push(root);                         // Push Root Node into the Stack
    // while Stack is not empty ...
    while (isEmpty() == false)
    {
      current = pop();                  // Mark the address popped out of stack as current
      printf("%d\t", current->data);    // Print the data the popped address which is marked as current in prvious step
      current->visited = true;          // Mark true for the current node being visted
      // In DFS, we visit the tree to the bottom and then climb up when there comes a dead end
      if (current->right != NULL)
      {
        push(current->right);           // if right child is not null, then push it into the stack
      }
      if (current->left != NULL)
      {
        push(current->left);            // if left child is not null, then push it into the Stack
      }
    }
  }
}

// main() method to implement the BFS on BST
int main()
{
  int option, val;
  node *ptr;
  create_tree(tree);
  do
  {
    printf("\n\nPROGRAM TO IMPLEMENT DEPTH FIRST TRAVERSAL ON BINARY SEARCH TREE USING STACK");
    printf("\n====================================================================================");
    printf("\n1. Insert Element");
    printf("\n2. Depth First Traversal");
    printf("\n3. Exit");
    printf("\n\nEnter your option : ");
    scanf("%d", &option);
    switch(option)
    {
      case 1:
        printf("\nEnter the value of the new node: ");
        scanf("%d", &val);
        tree = insertElement(tree, val);
        break;
      case 2:
        printf("\nThe elements of the tree after applying breadth first traversal are:\n");
        DepthFirstTraversal(tree);
        break;
    }
  }
  while(option != 3);

  return 0;
}
