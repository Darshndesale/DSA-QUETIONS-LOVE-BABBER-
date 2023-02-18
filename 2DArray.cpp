#include<iostream>
using namespace std;

int main()
{
    /*int n;
    cin >> n;

    int **arr = new int*[n];

    for(int i=0; i<n; i++) 
    {
        arr[i]= new int[n];
    }
    // creation Is Done

    //Printing of array
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }cout<<endl;
    }

    delete []arr;*/
// realease the memory esaely


    // Creation of jaggered array

    int row1[1] = {1};
    int row2[2] = {2,3};
    int row3[3] = {4,5,6};

    int* jagged[3] = {row1,row2,row3};

    
    // Array to hold the size of each row
    int Size[3] = { 1,2,3 }, k = 0;

    for (int i = 0; i < 3; i++) {
  
        // pointer to hold the address of the row
        int* ptr = jagged[i];
  
        for (int j = 0; j < Size[k]; j++) {
            printf("%d ", *ptr);
  
            // move the pointer to the
            // next element in the row
            ptr++;
        }
        cout<<endl;
    }



    return 0;
}