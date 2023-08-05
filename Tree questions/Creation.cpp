#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* createtree(Node* root)
{
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1)
        return NULL;

    cout<<"Enter data for inserting in left :"<<data<<endl;
    root->left = createtree(root->left);
     cout<<"Enter data for inserting in right :"<<data<<endl;
    root->right = createtree(root->right);

    return root;
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

void inoreder(Node* root)
{
    //base case 
    if(root == NULL)
        return ;

    inoreder(root->left);
    cout<<root->data<<" ";
    inoreder(root->right);
}

void preoreder(Node* root)
{
    //base case 
    if(root == NULL)
        return ;

    cout<<root->data<<" ";
    preoreder(root->left);
    
    preoreder(root->right);
}

void postoreder(Node* root)
{
    //base case 
    if(root == NULL)
        return ;

    postoreder(root->left);
  
    postoreder(root->right);

    cout<<root->data<<" ";
}


int main()
{
    Node* root = NULL;

    root = createtree(root);
    //data i/p --> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // create data
    cout<<"This is the after traversal :"<<endl;
    leveltraversal(root);

    //inoreder traversal
    // cout<<"this is the o/p of inoreder traversal :"<<endl;
    // inoreder(root);
    // cout<<endl;
    // cout<<"this is the o/p of preoreder traversal :"<<endl;
    // preoreder(root);
    // cout<<endl;
    // cout<<"this is the o/p of postoreder traversal :"<<endl;
    // postoreder(root);
    return 0;

}