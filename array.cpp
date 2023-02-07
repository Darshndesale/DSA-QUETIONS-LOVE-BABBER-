#include <iostream>
using namespace std;

int getmin(int a[],int size){

    int mini;//=INT_Max;
    
    for(int i=0; i<size; i++){
         
         mini=min(mini,a[i]);
        /*if(a[i]<mini)
        {
            mini=a[i];
        }*/
    }

    return mini;
}

int getmax(int a[],int size){

    int maxi;//=INT_Max;
    
    for(int i=0; i<size; i++){
         
         maxi=max(maxi,a[i]);
        /*if(a[i]<mini)
        {
            mini=a[i];
        }*/
    }

    return maxi;
}
int main() {
  int a[15];

  int size;
  cin>>size;

  for(int i=0; i<size; i++){
    cin>>a[i];
  }

  cout<<"The minimum value in array is :"<<getmin(a,size)<<endl;
  cout<<"The maximum value in array is :"<<getmax(a,size)<<endl;

  return 0;
}