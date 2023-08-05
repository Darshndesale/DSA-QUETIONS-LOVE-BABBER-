#include<iostream>
using namespace std;

void SlectionSort(int *arr,int n)
{
    //base case 
    if(n == 0 || n==1)
        return ;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {

        if(arr[i] > arr[j])
        {
            swap(arr[i] , arr[j]);
        }
        }
    }

    SlectionSort(arr+1,n-1);
}
int main()
{

    int arr[5] ={20,5,10,11,8};
    int n = 5;

    SlectionSort(arr,5);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}