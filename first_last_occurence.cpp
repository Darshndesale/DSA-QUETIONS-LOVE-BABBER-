#include<iostream>
using namespace std;


int first_occurence(int a[],int n,int key)
{
    int low=0,high=n-1,mid,ans=-1;


    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(a[mid] >key)
        {
            high = mid - 1;
        }
        else{

            low = mid + 1;
        }

    }

    return ans;
}

int last_occurence(int a[],int n,int key)
{
    int low=0,high=n-1,mid,ans=-1;


    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if(a[mid] >key)
        {
            high = mid - 1;
        }
        else{

            low = mid + 1;
        }

    }

    return ans;
}
int main()
{
    int arr[5]={2,2,2,2,4};
    int n=5;
    int key;

    cin>>key;
    cout<<endl<<"first ocuence is :"<<first_occurence(arr,n,key)<<endl;
    cout<<endl<<"first ocuence is :"<<last_occurence(arr,n,key)<<endl;
    
    return 0;
}