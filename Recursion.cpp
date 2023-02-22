#include<iostream>
using namespace std;

int fact(int n)
{
    //Base case likho

    if(n == 0)
        return 1;

    // Divide the problem in baddi and chotti problm
    // #1 this is one of the step
    
    int chotti = fact(n-1);
    int badi = n * chotti;

    return badi;
}

int power(int n)
{
    //Base case likho

    if(n == 0)
        return 1;

    // Divide the problem in baddi and chotti problm
    // #1 this is one of the step

    int smallerproblem = power(n-1);
    int Biggerproblem = 2 * smallerproblem;

    return Biggerproblem;
}

void printCounting(int n)
{
    //base con^n is when the count is goes 0

    if(n == 0)    
        return ;

    
    //  recursion relationship(Tell relationship)
   // cout << n << " "<<endl;
    //printCounting(n-1);

    //  recursion relationship(Tell relationship)

    printCounting(n-1);
    cout << n << " "<<endl;
}


int main()
{
    int n;

    cin >> n;

    //int ans = fact(n);
    //cout << "Fact is :" << ans << endl;

    //int power2 = power(n);
    //cout << "Ans is :" << power2 <<endl;

    printCounting(n);

    return 0;
}


// remains QNA IS ----> COUNT WAY TO REACH THE NTH STAIRS