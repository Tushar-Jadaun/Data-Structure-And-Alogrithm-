#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int start=0;
    
    vector<int>arr={45,25,35,48,86};
    int end=arr.size()-1;
    for(int i=0;i<arr.size();i++)
    {
        swap(arr[start],arr[end]);
        

    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

}