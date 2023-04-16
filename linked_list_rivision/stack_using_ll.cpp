#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class stack()
{
    public:
    Node* top = NULL;

    void push(int data)
    {
        Node* temp = new Node(20);
        //check if stack full
        if(temp == NULL)
        {
            cout << "stack overflow"<<endl;
        }
        else{
            temp -> next = top;
            top = temp;
        }
    }

    pop(Node* top,Node* temp)
    {
        if(top == NULL)
        {
            cout<<"stak underflow"<<endl;
        }
        else{
            
        }
    }
}