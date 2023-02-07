#include<iostream>
using namespace std;

void isprime(int n)
{
    int num=2;
    int i=0;
    while(num<n)
    {
        if(n%num==0)
        {
            i=1;
            break;
        }
        else{

            num++;
        }
    }

    if(i==0){
        cout<<"No is prime";
    }
    else{
        cout<<"NO is no prime";
    }
}


int main()
{
    int n=5;
    isprime(n);
    return 0;
}