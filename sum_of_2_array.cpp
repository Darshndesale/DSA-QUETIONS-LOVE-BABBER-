#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_array(vector<int> v)
{
    int s=0;
    int e=v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        cout<< vec[i] <<" ";
    }cout<<endl;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int> ans;
    while(i>=0 && j>=0)
    {
        int sum= a[i] + b[j] + carry;
        carry = sum/10;
        int val = sum % 10;
        ans.push_back(val);

        i--;
        j--;
    }

    while(i>=0)
    {
        int sum= a[i] + carry;
        carry = sum/10;
        int val = sum % 10;
        ans.push_back(val);

        i--;
    }

    while(j>=0)
    {
        int sum= b[j] + carry;
        carry = sum/10;
        int val = sum % 10;
       ans.push_back(val);

        j--;
    }

    while(carry != 0)
    {
        int sum=carry;
        carry = sum/10;
        int val = sum%10;
        ans.push_back(val);
    }

    //reverse_array(ans)
    print(reverse_array(ans)); // it is call function call time
}
int main()
{
    vector<int> a;
    vector<int> b;
    
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);

    b.push_back(3);
    b.push_back(4);
    b.push_back(5);

    findArraySum(a,3,b,3);
    cout<<endl;
    cout<<"run succesfully"<<endl;
    
    return 0;
}