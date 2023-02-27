#include<iostream>
using namespace std;

int find_pivote(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid;
    
    while(s<e)
    {
        mid = s+(e-s)/2;

        if(a[mid] > a[0])
        {
            s = mid +1;
        }
        else{
            e=mid;
        }
    }
    return a[s];
}

int usingbinary(int *arr,int s,int e)
{
    int mid;
     if(s > e)
        return arr[s];

    mid = s+(e-s)/2;

    if(arr[mid] > arr[0])
    {
        return usingbinary(arr, mid+1, e);
    }
    else{
        return usingbinary(arr, s, mid-1);
    }
}


int main()
{

    int arr[5]={7,9,1,2,3};
    int n=5;

    //cout<<"pivote is :"<<find_pivote(arr,n)<<endl;

    cout << "pivote element is" << usingbinary(arr,0,4)<<endl;
}