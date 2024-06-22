#include<iostream>
#include<vector>
using namespace std;

int number (vector<int>arr)
{
    // use 0 because when we do xor of any number with 0 it return number 
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    // return the value of ans
    return ans;
}

int main()
{
    //insert size of array
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    // insert the arr
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cout<<"enter the array up to "<< n <<":";
        cin>>arr[i];
    }
    // use function 
    int find = number(arr);
    // print the unique number
    cout<<"this is unique number "<<find;
return 0;
}