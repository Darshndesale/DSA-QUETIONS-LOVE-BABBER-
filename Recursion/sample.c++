#include<iostream>
using namespace std;

void print(int n)
{
    //base case
    if(n == 1)
    {
        cout << n << "" << endl;;
        return;
    }


    cout << n <<endl;
    print(n-1);
}

void printsum(int num,int n,int sum)
{

    //base case
    if(num == n)
    {
        sum += num;
        cout<<sum<<endl;

        return;
    }

    sum = sum + num;
    printsum(num+1,n,sum);
}

int fib(int n){
    //base case
    if(n == 1) return 1;
    if(n == 0) return 0;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n=8;
    cout << fib(n) << endl; 
    //n=1;

    // int num = 1;
    // printsum(num,5,0);
}