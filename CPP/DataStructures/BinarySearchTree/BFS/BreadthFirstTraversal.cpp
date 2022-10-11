// C/C++ PROGRAM TO IMPLEMENT BREADTH FIRST TRAVERSAL OF BINARY SEARCH TREE USING QUEUE
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

// Defining structure of Queue (implementation using Linked List)
typedef struct queue
{
  node *data;               // Pointer variable to store the address of the node being visited in the BST 
  struct queue *next;       // Pointer for next member present in Queue
}
queue;
queue *Front = NULL, *Rear = NULL, *B;


// Function to check whether the queue is empty or not
bool empty()
{
    if (Front == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function to perform enqueue() operation for Queue
void enqueue(node *x)
{
    // if queue is empty ...
    if(empty()==true)
    {
        Front = (queue *)malloc(sizeof(queue));         // Allocate memory for front node of queue
        Rear = Front;                                   // Initialize rear with front, since queue is empty
    }
    // else if queue is not empty ...
    else
    {
        Rear->next = (queue *)malloc(sizeof(queue));    // Allocate memory for next field of rear node of queue
        Rear = Rear->next;                              // Shift rear pointer to next node present in queue
    }

    Rear->data = x;                                 // Insert x in the queue (x is the address of the node being visted in BST)
    Rear->next = NULL;                              // Initialize the next field of rear node of queue with NULL
}

// Function to perform dequeue() operation for Queue
void dequeue()
{
    if(empty()==true)
    {
        printf("\nThe Binary Tree has been processed completely");      // if queue is empty print a message stating that it is empty
    }
    // esle if queue has single member present in it
    else if(Front==Rear)
    {
        free(Front);    // free memory being allocated
        Front = NULL;   
        Rear = NULL;    // remove dangling pointer by initializing it with NULL
    }
    // else if queue has two or more members
    else
    {
        B = Front;              // Store Front node of Queue (this is the node of the tree whose data is printed while BFS)
        Front = Front->next;    // Shift Front to next member in the queue
        free(B);                // free memory for the node being traversed as it is no longer needed
    }
}

// Function to create an empty tree
void create_tree(node *tree)
{
  tree = NULL;
}

// Function to insert element in BST
node *insertElement(node *tree, int val)
{
  node *ptr, *nodeptr, *parentptr;          // Pointer variable for node being created, Pointer variable for node being visited, Pointer variable for parent of current node being visted respectively
  ptr = (node*)malloc(sizeof(node));        // Allocating memory for creating node
  ptr->data = val;                          // Assigning value to the node being created
  ptr->visited = false;                     // Initializing false to every node being created as no node is visited yet
  ptr->left = NULL;                         // Initializing NULL to left child
  ptr->right = NULL;                        // Initializing NULL to right child

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
        nodeptr = nodeptr->left;    // if inserted value is less than value of parent node, create left child
      else
        nodeptr = nodeptr->right;   // else if inserted value is greater than value of parent node, create right child
    }
    if(val < parentptr->data)
      parentptr->left = ptr;        // if inserted value is less than value of parent node, mark left child as ptr
    else
      parentptr->right = ptr;       // else if inserted value is greater than value of parent node, mark right child as ptr
  }
  return tree;
}

// Function to implement Breadth First Traversal
void BreadthFirstTraversal(node *root)
{
    node *current;
    if (root != NULL)
    {
        enqueue(root);                          // Enqueue Root Node
        // while queue is not empty ...
        while (empty()==false)
        {
            current = Front->data;              // Mark front's data of queue (data is address of the node being visited) as current
            current->visited = true;            // Mark true for the current node being visted
            printf("%d\t", current->data);      // Print the value of the node being visited
            // In BFS, we visit the tree level wise from left to right
            if (current->left != NULL)
            {
                enqueue(current->left);         // if left child is not null, then enqueue it in the queue
            }
            if (current->right != NULL)
            {
                enqueue(current->right);        // if right child is not null, then enqueue it in the queue
            }
            dequeue();                          // Once the data of visted node is printed, dequeue it
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
    printf("\n\nPROGRAM TO IMPLEMENT BREADTH FIRST TRAVERSAL ON BINARY SEARCH TREE USING QUEUE");
    printf("\n====================================================================================");
    printf("\n1. Insert Element");
    printf("\n2. Breadth First Traversal");
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
        BreadthFirstTraversal(tree);
        break;
    }
  }
  while(option != 3);

  return 0;
}
