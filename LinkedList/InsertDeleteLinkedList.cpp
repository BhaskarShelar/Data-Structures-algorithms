#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void insertAtStart(Node ** head, int data)
{
    Node *new_node=new Node();
    new_node->data=data;
    new_node->next=(*head);
    *head=new_node;
}
void insertAfter(Node *PrevNode, int data)
{
    if(PrevNode==NULL)
    {
        cout<<"given previous node is empty , can't insert ";
        return;
    }
    else
    {
         Node *new_node=new Node();
        new_node->data=data;
        new_node->next=PrevNode->next;
        PrevNode->next=new_node;
    } 
}
void insertAtEnd(Node ** head, int data)
{
    Node *new_node=new Node();
    new_node->data=data;
    new_node->next=NULL;
     if(*head==NULL)
        *head=new_node;
      else
      {
         Node *curr=*head;
         while(curr->next!=NULL)
            curr=curr->next;
          curr->next=new_node; 
      }    
}
void  DeleteAtStart(Node **head)
{
    if(*head==NULL)
        return ;
    Node* temp = *head; 
    *head=(*head)->next;
    delete temp;
 }
void DeleteLastELement(Node **head)
{
    if(*head==NULL)
        return;
    Node * temp=*head;
    while(temp->next->next!=NULL)
         temp=temp->next; 
    delete temp->next;
    temp->next=NULL;
     
}
void DeletewithKeyElement(Node **head,int key)
{
    if(*head==NULL)
        return;
    Node * temp=*head;
    Node *prev;
    if(temp!=NULL && temp->data==key)
    {
        *head=temp->next;
        delete temp;
        return;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    } 
    if(temp==NULL) return;
    
    prev->next=temp->next;
    delete temp;
}
void printLinkedList(Node *head)
{
    //cout<<"Linked list \n ";
     while(head!=NULL)
    { 
        cout<<head->data<<" ->";
        head=head->next;
    }    
    cout<<"NUll"<<endl;
}
int main()
{
    Node *head=NULL;
     insertAtStart(&head,5);
    insertAtStart(&head,6);
    insertAtStart(&head,7);
    insertAfter(head->next,9);
    insertAtEnd(&head,10);
    insertAtEnd(&head,12);
    insertAfter(head->next->next,12);
    printLinkedList(head);
   // DeleteAtStart(&head);
    //DeleteAtStart(&head);
   // printLinkedList(head);
   // DeleteLastELement(&head);
   // printLinkedList(head);
    DeletewithKeyElement(&head,12);
   printLinkedList(head);

    return 0;
}