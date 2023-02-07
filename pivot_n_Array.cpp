#include<iostream>
using namespace std;

int find_pivote(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid;
    
    while(s<e)
    {
        mid = (s+(e-s)/2);

        if(a[mid] > a[0])
        {
            s = mid +1;
        }
        else{
            e=mid;
        }
    }
    return s;
}


int main()
{

    int arr[5]={3,4,10,17,1};
    int n=5;
    int key;

    cout<<"pivote is :"<<find_pivote(arr,n)<<endl;
}