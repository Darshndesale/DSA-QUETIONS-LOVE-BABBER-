#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;

        if(a != b)
        {
            if(a>b)
            {
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
}
int main()
{
    int a,b;

    cout<<"Enter the value of a and b :";
    cin>>a>>b;

    int ans = gcd(a,b);

    cout<<"The answer is " <<ans<<endl;
}