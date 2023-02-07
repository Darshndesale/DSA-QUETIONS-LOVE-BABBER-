#include<iostream>
using namespace std;

void sort_a(int arr[],int n)
{
    int low=0,high=n-1,mid=0;

    while(mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{

            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[5]={0,1,2,0,1};
    sort_a(arr,5);
    int n=5;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"hi";
    return 0;
}