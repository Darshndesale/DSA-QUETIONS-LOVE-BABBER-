#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;s
        }
};

Node* insertIntoBst(Node* root,int d)
{
    //base case
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root->data)
    {
        root->right = insertIntoBst(root->right,d);
    }
    else{
        root->left = insertIntoBst(root->left,d);
    }
    return root;
}

void takeinput(Node* &root){

    int data;
    cin>>data;

    while(data != -1)
    {
        root = insertIntoBst(root,data);
        cin>>data;
    }


}

void leveltraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    //this is seperator
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
        }

    }
}

//minimum value in binar tree

int MinInBst(Node* root)
{
    Node* temp = root;
    while(temp->left != NULL)
    {
        temp=temp->left;
    }

    return temp->data;
}

//max in bst
int MaxInBst(Node* root)
{
    Node* temp = root;
    while(temp->right != NULL)
    {
        temp=temp->right;
    }

    return temp->data;
}

//delete from bst

Node* deleteFromBst(Node* root,int x)
{
    //base case
    if(root == NULL)
        return root;

    if(root->data == x)
    {
        //no child
        if(root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    }

        //one child
        if()
        {root->left == NULL && root->right != NULL
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL)
        {
            int minval = MinInBst(root->right)->data;
            root->data = minval;

             root->right = deleteFromBst(root->right,minval);
             return root;
        }


    }
    else if(root->data > x)
    {
        root->left = deleteFromBst(root->left,x);
        return root;
    }
    else{
         root->right = deleteFromBst(root->right,x);
        return root;
    }
}
int main()
{
    Node* root=NULL;

    //make the input function
    cout<<"Enter the data to create BST :"<<endl;

    takeinput(root);

    leveltraversal(root);

    //find minimum value in bst
    cout<<"Min value is :"<<MinInBst(root)<<endl;

    //find maximum value in bst
    cout<<"Max value is :"<<MaxInBst(root)<<endl;
    return 0;
}