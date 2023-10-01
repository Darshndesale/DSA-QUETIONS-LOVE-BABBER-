// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print(int n)
{
    //base case
    if(n == 1)
        return ;
    
    print(n+1);
    cout << n << " ";
}
int main() {
    int n;
    
    cout << "Enter The val of N :" ;
    cin >> n;
    
    cout << "The Printed list from 1 to n :" << endl;
    print(n);
    return 0;
}