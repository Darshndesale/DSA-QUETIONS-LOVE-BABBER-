#include<iostream>
using namespace std;

// this is the circular linked linked list structure
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    // contructor for initialize the data members of doubly list
    Node(int x){
        this->data = x;
        this->next = NULL;
        this->prev = NULL;
    }
};

void inserTheNode(Node* &head,Node* &tail){
    int val;
    cout << "Enter the val of node ";
    cin >> val;

    Node* temp = new Node(val);

    if(head == NULL)
    {
        head = temp;
        tail = head;
    }
    else{
        tail->next = temp;
        temp->prev = tail;

        tail = tail->next;
    }
}

void Print_Nodes(Node* &head){
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    inserTheNode(head,tail);
    inserTheNode(head,tail);
    inserTheNode(head,tail);
    inserTheNode(head,tail);
    cout << "done" << endl;
    //print the nodes value
    Print_Nodes(head);

    return 0;
}