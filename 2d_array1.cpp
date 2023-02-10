#include<iostream>
using namespace std;

//Tis funcyion is search the perticular element in an aaray
bool ispresent(int arr[][3],int key,int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j] == key)
                return true;
        }
     
    }
    return false;
}

// This fun() gives the sum wise row 
void RowWiseSum(int arr[][3],int row,int col)
{
    
    cout<<"youre sum is-->";
    for(int i=0; i<3; i++)
    {
        int sum=0;
        for(int j=0; j<3; j++)
        {
             sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int getMaxi(int arr[][3],int row,int col)
{
    int maxi=-1;
    int rownum=-1;

    cout<<"youre sum is-->";
    for(int i=0; i<3; i++)
    {
        int sum=0;
        for(int j=0; j<3; j++)
        {
             sum += arr[i][j];
        }
        cout<<sum<<" ";
        cout<<endl;

        if(maxi < sum)
        {
          
           maxi=sum;
           rownum=i;

        }
    }

    cout << "The Max row at index--> " <<rownum<<endl;                             

    return maxi;
}
int main()
{
    int arr[3][3];
    

    //Taking row wise i/p
    cout << "Enter Elements in an array " << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }//This is column wise i/p

    ////Taking row wise o/p

    cout << "Elements in an array " << endl;  
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //int target;
    //cin>>target;

    /*if(ispresent(arr,target,3,3))
    {
        cout<<"Elemnet is present"<<endl;
    }
    else{
        cout<<"Elemnet is not present"<<endl;
    }*/

    //RowWiseSum(arr,3,3);

    cout << "The maxi is -->" << getMaxi(arr,3,3)<<endl;
    return 0;


}
