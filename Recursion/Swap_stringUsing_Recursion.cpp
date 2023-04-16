#include<iostream>
using namespace std;

void Swap_string(string &str,int i,int j)
{
    //base case 
    if(i>j)
        return ;

    swap(str[i],str[j]);
    i++;
    j--;

    //recusive relation

    Swap_string(str,i,j);
}

bool checkPalindrome(string str,int i,int j)
{
    //base case 

    if(i>j)
        return true;

    if(str[i] == str[j])
    {

        i++;
        j--;
        return checkPalindrome(str,i,j);
    }
    else{
        return false;
    }

    //recursive relation


}
int main()
{
    string str= "bookkoob";

   /*/ cout << str<<endl;
     Swap_string(str,0,str.length()-1);
    cout << str << endl;
*/
    cout << checkPalindrome(str,0,str.length()-1) <<endl;
    return 0;
}