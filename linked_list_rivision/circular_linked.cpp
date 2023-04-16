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

void insertAtfirst(Node* &head,Node* &tail,int data)
{
    Node* temp=new Node(data);

    temp->next=head;
    tail->next=temp;
    head=temp;

}

void print(Node* &head)
{
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp != head);
}

int main()
{
    Node* node1=new Node(10);
    
    Node* head = node1;
    head->next=node1;
    Node* tail=head;  
    print(head);

    cout<<tail->data<<endl;
    cout<<head->data<<endl;
    //insertAtfirst(head,tail,5);
    print(head);

    return 0;
}