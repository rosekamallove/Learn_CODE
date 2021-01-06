#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;   //sotring the data
    node *next; //pointing to the next node

    node(int val) //constructor
    {
        data = val;
        next = NULL; //parsing null to the next node
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
        head = n;
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    display(head);
    return 0;
}