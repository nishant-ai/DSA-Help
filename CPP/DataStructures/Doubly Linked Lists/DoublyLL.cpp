#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    head->prev = n;
    n->next = head;

    head = n;
}

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deletion(node *&head, int val)
{
    node *temp = head;
    while (temp->data != val)
    {
        temp = temp->next;
    }

    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void printLL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = NULL;
    insertAtHead(head, 1);
    for (int i = 1; i < 6; i++)
    {
        insertAtTail(head, i + 1);
    }

    insertAtHead(head, 0);
    deletion(head, 1);
    printLL(head);
    return 0;
}