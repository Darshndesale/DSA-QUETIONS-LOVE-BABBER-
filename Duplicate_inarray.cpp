#include<iostream>
using namespace std;

int find_Dup(int a[],int n)
{
     int ans=0;

     for(int i=0; i<n; i++){

        ans= ans^a[i];
     }

     for(int i=1; i<n; i++){

        ans= ans^i;
     }

     return ans;
}


int main()
{
    int arr[5]={4,2,1,4,3};
    int n=5;
    cout<<"duplicate elment is :"<<find_Dup(arr, n)<<endl;
    cout<<"FIND DULICATE SUCCESFULL"<<endl;
    return 0;
}