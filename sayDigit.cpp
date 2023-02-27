#include<iostream>
using namespace std;

void saydigit(int n , string arr[])
{
    //base case 

    if(n == 0)
        return ;

    // processing
    int digit = n % 10;
    n = n / 10;

   

    //recursive call

        saydigit(n,arr);

        cout << arr[digit] <<" ";

}

// check array is sorted or not SOLVE BY RECURSION

bool issorted(int arr[] , int size)
{
    //Base condition

    if(size==0 || size==1)
        return 1;

    if(arr[0] > arr[1])
    {
        return 0;
    }
    else{

        bool ans=issorted(arr+1,size-1);
        return ans;
    }
}

// sum of elements in an array SOLVING BY RECURTION

int calcsum(int *arr , int size)
{
    //Base condition
    int sum;
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    cout << "sum "<<arr[0]<< " " <<size<<endl;

       int ans=calcsum(arr+1,size-1);
       cout << arr[0] <<"ans "<< ans<<endl;
     sum = arr[0] + ans;

        return sum;
    
}

int main()
{
    /*int n;

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    cin >> n;
    saydigit(n,arr);*/

    int arr[5] ={5,4,8,9,11};
    int size = 5;

    /*if(issorted(arr,size))
    {
        cout<<"Yes sorted";
    }
    else{
        cout << "No";
    }*/

    cout << "The sum is :" << calcsum(arr , size) << endl;

    return 0;
}