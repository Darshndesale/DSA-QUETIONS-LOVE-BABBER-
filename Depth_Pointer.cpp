#include<iostream>
using namespace std;

int main()
{

    /*int arr[5] = {2,3,4,5,6};

    cout<<"Addrease of firs location " << arr <<endl;
    cout << arr[0]<<endl;
    cout << "addrese :" <<&arr[0] << endl;

    cout << "2nd loc value" << *(arr+1) << endl;;

    // chalaki for printing

    int i=3;

    cout << i[arr] << endl;

    int temp[10] = {1,2};
    cout<<"size is " << sizeof(temp) << endl;
    cout<<"size is " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout<<"size is " << sizeof(ptr) << endl;

    cout<< "value at :" <<*(ptr) <<endl;

    int a[10] = {1,2,3,4,5};
    int *p = &a[0];

    cout << "1st -->" << &p << endl;
    cout << "1st -->" << &(*p) << endl;
    cout << "1st -->" << &p << endl;
    
    p = p+1;
    cout << p << endl;
    */

    char ch[8] = {"darshan"};
    cout << "charecters :" << ch << endl;

    char *temp = &ch[0];
    cout << "2nd " << temp << endl;

    char c = 'z';
    char *demo = &c;
    //untill print when NULL char is throw
    cout << "3rd " << demo <<endl;


    return 0;
}