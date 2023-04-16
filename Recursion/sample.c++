#include<iostream>
using namespace std;

void print(int n)
{
    //base case
    if(n == 6)
        return;


    cout << n <<endl;
    print(n+1);
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

int main()
{
    // int n=1;
    // print(n); //n=1;

    int num = 1;
    printsum(num,100,0);
}