#include<iostream>
using namespace std;

bool search(int arr[][4],int t,int row,int col)
{
     for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {  
            if(arr[row][col] == t)
            {
                return 1;
            }
        }

    }
    return 0;
}

void row_wise_sum(int arr[][4],int row,int col)
{
    int sum = 0;
    for(int row=0; row<3; row++)
    {
        sum = 0;
        for(int col=0; col<4; col++)
        {
            sum += arr[row][col];
        }
        cout<<"Sum of Row :"<<row<<" is "<<sum<<endl;
    }

}

void largest_Rowsum(int arr[][4],int row,int col)
{
    int sum = 0;
    int maxi = -11111;
    int index;
    for(int row=0; row<3; row++)
    {
        sum = 0;
        for(int col=0; col<4; col++)
        {
            sum += arr[row][col];
        }
        if(sum > maxi)
        {
            maxi = sum;
            index = row;
        }
    }
    cout<<"The largest sum is : "<<maxi<<" And the row in : "<<index;
}
int main(){
    //create the 2d matrix
    int arr[3][4];


    // taking the i/p
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }

    }
    // int t;
    // cout<<"Element element to search :";
    // cin>>t;

    // This is the function of the linear search;

    // if(search(arr,t,3,4))
    // {
    //     cout<<"Element found";
    // }
    // else{
    //     cout<<"Not found";
    // }


    // This if the calling functions
    // row_wise_sum(arr,3,4);

    // this is find max sum
    largest_Rowsum(arr,3,4);
    



// print the matrix row wise
// for(int row=0; row<3; row++)
// {
//     for(int col=0; col<4; col++)
//     {
//         cout<<arr[row][col]<<" ";
//     }
//     cout<<endl;
// }

// print the matrix column wise
// for(int row=0; row<4; row++)
// {
//     for(int col=0; col<3; col++)
//     {
//         cout<<arr[col][row]<<" ";
//     }
//     cout<<endl;
// }


    return 0;
}