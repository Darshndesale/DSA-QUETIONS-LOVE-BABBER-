#include<iostream>
using namespace std;

char to_lowwer(char ch)// give the char to covert into its lowwer form
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{

        char newchar = (ch - 'A' + 'a');
        return newchar;
    }
}

bool ispallindrome(char str[],int n)
{
    int s=0;
    int e=n-1;

    while(s<e)
    {
        if(to_lowwer(str[s]) != to_lowwer(str[e])) {
            return false;
        }
        else{

            
                s++;
                e--;
           
        }
    }
    return true;
}
int getlength(char name[])
{
    int count=0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[],int n)
{
    int s = 0;
    int e = n-1;

    while(s<e)
    {
        swap(name[s++],name[e--]);
    } 

    for(int i=0; name[i] != '\0'; i++)
    {
        cout<< name[i];
    }
}
int main()
{
    char name[10];

    cout<< "Enter your name"<<endl;
    cin >> name;
    cout << "Your name is " <<name << endl;

    //cout<< "Lenght :" << getlength(name)<<endl;
    int len=getlength(name);

    //reverseString(name,len);

    cout<<"The string is:"<<ispallindrome(name,len)<<endl;


    // covert upper to lowwer case
    //cout<<"lowwer case :"<<to_lowwer('A')<<endl;

    return 0;
}