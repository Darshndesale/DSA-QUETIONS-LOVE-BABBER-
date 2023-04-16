#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid = (s+e)/2;

    int len1 = mid - s+1;
    int len2 = e - mid;

    int *first = new int[len1]; 
    int *second = new int[len2]; 

    int mainindex = s;

    for(int i=0; i<len1; i++)
    {
        first[i]=arr[mainindex++];
    }

     mainindex = mid+1;
    for(int i=0; i<len1; i++)
    {
        second[i]=arr[mainindex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainindex = s;
    //merge two array
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainindex++] = first[index1++];
        }
        else{
            arr[mainindex++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
            arr[mainindex++] = first[index1++];
    }

    while(index2 < len2)
    {
            arr[mainindex++] = second[index2++];
    }

}
void mergesort(int *arr,int s,int e)
{
    // base case
    if(s >= e)
        return ;

        int mid = (s+e)/2;

        // sort left part
        mergesort(arr,s,mid);

        // sort the second part
        mergesort(arr,mid+1,e);

        //merge
        merge(arr,s,e);
}
int main()
{
    int arr[7] = {-3,-5,1,0,8,3,-2};
    int n= 7;
    mergesort(arr,0,n-1);
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}