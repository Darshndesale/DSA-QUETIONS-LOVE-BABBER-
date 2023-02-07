#include<iostream>
using namespace std;

/*int isprime(int no)
{
    if(no%2==0)
    {
        return 1;//for prime
    }
    else{
        return 0;// not prime
    }
}
int main()
{
    int num;

    cin>>num;
    
    if(isprime(num))
    {
  
         cout<<"number is prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}*/

int fact(int n)
{
    int fac=1;

    for(int i=1; i<=n; i++){
        fac=fac*i;
    }

    return fac;
}


int nCr(int n, int r)
{
    int num=fact(n);

    int deno=fact(r)*fact(n-r);

    return num/deno;

    
}
int main()
{
    int n,r;

    cin>> n>> r;

    cout<<"the ans is "<<nCr(n,r)<<endl;

    return 0;
}