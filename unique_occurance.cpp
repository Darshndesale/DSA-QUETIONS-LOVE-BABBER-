#include<iostream>
using namespace std;

int unique_element(int a[],int n)
{
    int ans=0;
    for(int i=0; i<n; i++){

         ans=ans^a[i];
    }
    return ans;
}

int main()
{
    int arr[10]={1,5,3,1,5,2,8,2,1,8};
    int n=10;
    
    cout<<"unique elemnt is :"<<unique_element(arr,n)<<endl;
    return 0;
}