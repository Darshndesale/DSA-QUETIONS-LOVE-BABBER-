#include<iostream>
using namespace std;

class Node{
    public:
    //create a node 
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void Printlinklist(Node* &head)
{
    //traverse a overall link list
    Node* temp=head;

    while(temp != NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;
    }cout<<endl;
}

void insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);

     temp->next=head;
     head=temp;
}

void insertAtTail(Node* &head,int data)
{
    Node* temp=new Node(data);

    Node* temp1=head;
    while(temp1->next != NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->next=NULL;

}

void insertAtMiddle(Node* &head,int pos,int data)
{
    Node* prev=head;

    if(pos==1)
    {
        insertathead(head,data);
        return; 
    }
    int cnt=1;
    while(cnt != pos-1)
    {
        prev=prev->next;
        cnt++;
    }

    Node* temp=new Node(data);
    temp->next=prev->next;
    prev->next=temp;
    
}

void delnodeAtfirst(int pos,Node* &head)
{
    //delete first node

    if(pos == 1)
    {
        Node* temp=head;
        head=head->next;
        int value=temp->data;
        cout<<"This is the delete value " <<value<<endl;
        temp->next=NULL;
        delete temp;
    }
    else{
        //this code for delte middle and last node
        Node* prev=head;
        Node* temp;
        int cnt=1;
        while(cnt != pos-1)
        {
            prev=prev->next;
            cnt++;
        }
        temp=prev->next;

        prev->next=temp->next;
        int value=temp->data;
        cout<<"This is the delete value " <<value<<endl;
        temp->next=NULL;
        delete temp;
    }
}
int main()
{
    Node *head1=new Node(10);
    cout <<head1->data <<endl;

    Node* head=head1;
    cout << "This is print the data present in the link list" <<endl;
    Printlinklist(head);

    insertathead(head,12);
    Printlinklist(head);

    insertAtTail(head,9);
    Printlinklist(head);

    insertAtMiddle(head,1,6);
    Printlinklist(head);

    delnodeAtfirst(3,head);
    Printlinklist(head);

    return 0;
}