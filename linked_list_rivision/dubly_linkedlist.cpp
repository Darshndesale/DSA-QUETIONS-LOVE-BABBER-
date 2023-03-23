#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* head)
{
    Node* temp=head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void inserAthead(Node* &head,int d)
{
    Node* temp=new Node(d);

    temp->next=head;
    head->prev=temp;
    head=temp;
}

void inserattail(Node* &head,int d)
{
    Node* newnode=new Node(d);
    Node* temp=head;

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
}

void insertAtPosition(Node* &head,int pos,int data)
{
    Node* temp=head;

    if(pos==1)
    {
        inserAthead(head,data);
        return; 
    }

    int cnt=1;
    while(cnt != pos-1)
    {
       temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL)
    {
        inserattail(head,data);
        return;
    }

    Node* newnode=new Node(data);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
    
}

void deletenodes(Node* &head,int pos)
{

    //delete first node

    if(pos == 1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        int value=temp->data;
        cout<<"This is the delete value " <<value<<endl;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //this code for delte middle and last node
        Node* pre=head;
        Node* current;
        int cnt=1;
        while(cnt != pos-1)
        {
            pre=pre->next;
            cnt++;
        }
        current=pre->next;

        pre->next->prev=NULL;
        int value=current->data;
        cout<<"This is the delete value " <<value<<endl;
        pre->next=current->next;
        current->next=NULL;
        delete current;
    }
}



int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);

    inserAthead(head,15);
    print(head);

    inserattail(head,25);
    print(head);
    inserattail(head,30);
    print(head);

    insertAtPosition(head,2,35);
    print(head);

    insertAtPosition(head,1,36);
    print(head);

    deletenodes(head,6);
    print(head);
    return 0;
}