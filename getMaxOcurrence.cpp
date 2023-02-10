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

int getlength(char arr[])
{
    int i=0;
    int n=arr.size();
    int ans=0;
    while(i<n)
    {
        int j=i+1;
        while(j<n && arr[i] == arr[j])
        {
            j++;
        }

         //this ans represent new size of char array

        arr[ans++] = arr[i];


        int count =j-i;

        if(count > 1)
        {
            int cnt = to_string(count);

            for(char ch : cnt)
            {
                arr[ans++]=ch;
            }
        }
        i=j;
    }
    return ans;
}
int main()
{
   char name[20];
   char arr[] = {'a','a','b','b','c','c','c'};

   cout<<"enter name :";
   cin>>name;
   cout<<getMaxOcurrence(name);

    cout<<"The new size is :"<<getlength(arr)<<endl;
   return 0; 
}