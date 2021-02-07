#include <bits/stdc++.h>
using namespace std;

/*
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
The elements in a linked list are linked using pointers 
In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.
*/
class node // Linked list does not come built in with cpp hence we define a class for the data structure
{
public:
    int data;   //sotring the data
    node* next; //pointing to the next node

    node(int val) //constructor
    {
        data = val;
        next = NULL; //parsing null to the next node
    }
};

void insertAtHead(node* &head, int val);
void insertAtTail(node* &head, int val);
void display(node* &head);
bool search(node* &head, int key);

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 4);

    display(head);
    return 0;
}

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val)
{

    node* n = new node(val);
    if (head == NULL)
        head = n;
    node* temp = head;
    while (temp->next != NULL) //untill the temp's next is not pointing to null
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* &head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node* &head, int key)
{
    node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return 1;
        temp = temp->next;
    }
    return 0;
}