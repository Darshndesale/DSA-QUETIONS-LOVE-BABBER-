#include<iostream>
using namespace std;


bool ispossible(int a[],int n,int m,int mid)
{
    int studentcount=1;
    int pagesum = 0;

    for(int i=0; i<n; i++){

        if(pagesum + a[i] <= mid)
        {
            pagesum += a[i];
        }
        else{

            studentcount++;

            if(studentcount >= m || a[i] >= mid  )
            {
                return false;
            }
            cout<<"no it is not possible"<<endl;
            pagesum = 0;
            pagesum += a[i];
        }
    }
    return true;
}
int search(int a[],int n,int m)
{
    
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    int s=0;
    //cout<<sum<<endl;
    int e=sum;
    
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e)
    {
        
        cout<<mid;

        if(ispossible(a,n,m,mid))
        {
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
    return ans;
}


int main()
{

    int arr[4]={10,20,30,40};
    int n=4;
    int m=2;

    cout<<"ans is :"<<search(arr,n,m)<<endl;
}