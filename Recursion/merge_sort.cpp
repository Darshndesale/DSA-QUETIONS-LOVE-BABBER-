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

void merge2(int *arr, int s, int e){
    //3 find mid
    int mid = (s+e)/2;

    //find the len len1 and len2
    int len1 = mid-s+1;
    int len2 = e-mid;

    //make the arr
    int *first = new int[len1];
    int *second = new int[len2];

    //mantain the index of main array
    int mainIndex = s;

    // fill the two half parts in this two arrays
    for(int i=0; i<len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid+1;
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // merge the arrays with sorted parts
    int idx1 = 0;
    int idx2 = 0;
    mainIndex = s;

    while(idx1 < len1 && idx2 < len2)
    {
        if(first[idx1] < second[idx2])
        {
            arr[mainIndex++] = first[idx1++];
        }
        else{
            arr[mainIndex++] = second[idx2++];
        }
    }

    while(idx1 < len1)
    {
        arr[mainIndex++] = first[idx1++];
    }

    while(idx2 < len2)
    {
        arr[mainIndex++] = second[idx2++];
    }
}

void mergesort2(int *arr, int s, int e){
    // 2>
    //base case
    if(s >= e)
    {
        return;
    }

    // find the mid
    int mid = (s+e)/2;

    // sort left part of arr
    mergesort2(arr,0,mid);

    // sort left part of arr
    mergesort2(arr,mid+1,e);

    //merge the sorted array
    merge2(arr,s,e);
}





int main()
{
    int arr[] = {5,10,4,1,33,22,55};
    int n= 7;
    // mergesort(arr,0,n-1);
    // cout<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i] <<" ";
    // }

    // 1>
    mergesort2(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}