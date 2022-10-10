# Doubly Linked Lists
A Doubly Linked List (DLL) contains an extra pointer, typically called the previous pointer, together with the next pointer and data which are there in the singly linked list.

## Advantages of DLL over the singly linked list:

1. A DLL can be traversed in both forward and backward directions. 
1. The delete operation in DLL is more efficient if a pointer to the node to be deleted is given. 
1. We can quickly insert a new node before a given node. 
1. In a singly linked list, to delete a node, a pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using the previous pointer. 

## Inside The Code File:

1. Forming A Doubly Linked List
2. Insertion of a node at head
3. Insertion of a node at tail
4. Deletion of a node
5. Printing a DLL