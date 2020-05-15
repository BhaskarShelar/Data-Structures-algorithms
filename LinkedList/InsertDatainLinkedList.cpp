#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
   struct Node *next;
};
struct Node * head=NULL;

void insert(int data)
{
    struct Node *temp=new Node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else 
    {
    struct Node* curr=head;
    while(curr->next !=NULL)
        curr=curr->next;
    curr->next=temp;
    }
}
void arraytoLinkedList(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
        insert(arr[i]);
    
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    arraytoLinkedList(arr,n);
    
    while (head != NULL) { 
        cout << head->data << " "; 
        head = head->next; 
    } 
    return 0;
    
}