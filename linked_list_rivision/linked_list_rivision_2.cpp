#include<iostream>
using namespace std;

//create the node using the wrapping its fields data and next pointer using class
class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        this->data = x;
        this->next = NULL;
        // | 5 | *--|--> NULL;
    }
};
// it is used for making the node with his data by user
Node* node()
{
    int data;
    cout << "Enter value of data : ";
    cin >> data;
    Node* temp = new Node(data);

    return temp;
}

Node* create_link_list(Node* &head,Node* &tel)
{
    
    if(head->next == NULL)
    {
        // create the new node
        Node* temp = node();

        head->next = temp;
        tel = temp;
    }
    else{
        // int data;
        // cout << "Enter value of data : ";
        // cin >> data;
        // Node* temp = new Node(data);

        // create the new node
        Node* temp = node();
        tel->next = temp;
        tel = temp;
    }
}

void print_link_list(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp -> next;
    }
}

Node* insert_at_beginning(Node* &head)
{
    // create the new node
        Node* temp = node();

    temp->next = head;
    head = temp;

    return head;
}
int main()
{
    
    // Node *node1 = new Node(10);
    // cout << "This is the node 1 data " << node1->data << endl;
    // Node *node2 = new Node(20);
    // cout << "This is the node 1 data " << node2->data << endl;
    // Node *node3 = new Node(30);
    // cout << "This is the node 1 data " << node3->data << endl;
    // Node *node4 = new Node(40);
    // cout << "This is the node 1 data " << node4->data << endl;
    int value;
    cout << "Enter value to make first node :";
    cin >> value;
    Node* head = new Node(value);
    Node* tel;

    while(1)
    {
        int ch;
        cout << "Ente your choice in menu (1> Crete the node list 2> break):";
        cin >> ch;

        switch(ch)
        {
            case 1: create_link_list(head,tel);
                    break;
            case 2: print_link_list(head);
                    break;
            case 3: insert_at_beginning(head);
                    break;
            case 4: return 0;
        }
    }

    return 0;
}