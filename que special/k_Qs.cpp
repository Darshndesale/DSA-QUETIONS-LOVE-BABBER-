#include<iostream>
using namespace std;



class kque{

    public:
    int n,k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freespot;

    public:
    kque(int n,int k){

        this->n = n;
        this->k=k;

        front = new int[k];
        rear = new int[k];
        for(int i=0; i<front.size(); i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

         next = new int[n];
          for(int i=0; i<n; i++)
        {
            next[i] = i+1;
        }

        next[n-1] = -1;

        arr = arr int[n];
       
        freespot = 0;

    }

    void enqueue(int data,int qn){

        //oberflow check
        if(freespot == -1)
        {
            cout<<"Empty"<<endl;
            return -1;
        }
        else{

            //find first index
            int index = freespot;

            //update freespot
            freespot = next[index];

            //check first element
            if(front[qn-1] == -1)
            {
                // update front
                front[qn-1] = index; 
            }
            else{
                // link the que elements
                next[rear[qn-1]] = index;
            }

            next[index] = -1;

            rear[qn-1] = index;

            arr[index] = data;
        }

        void dqueue(int qn){
            
        }
    }
}







int main()
{

    return 0;
}