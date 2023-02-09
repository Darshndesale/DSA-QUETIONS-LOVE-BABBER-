#include<iostream>
using namespace std;


char getMaxOcurrence(string s)
{
    int arr[26] = {0};

    // create a new array for counting a charecters

    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];

        int no = 0;


        no = ch - 'a';

        arr[no]++;
    }

    int max =-1, ans=0;

    for(int i=0; i<26; i++)
    {
        if(max < arr[i])
        {
            ans=i;
            max= arr[i];
        }
    }

    return 'a'+ans;
}
int main()
{
   char name[20];

   cout<<"enter name :";
   cin>>name;

    cout<<getMaxOcurrence(name);
   return 0; 
}