#include <bits/stdc++.h>
using namespace std;

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

void deletion(node* &head, int val);
void deleteAtHead(node* &head); // as the linked list with only one node does not have a n-1 node hence the above function won't  allow us to delete.

int main()
{
    return 0;
}

void deletion(node* &head, int val)
{
    if(head==NULL) return;
    if(head->next==NULL) deleteAtHead(head);
    node* temp = head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

void deleteAtHead(node* &head)
{
    node* todelete = head;
    head=head->next;

    delete todelete; // this is crucial or else it will cause a memory leak
}