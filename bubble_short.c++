#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    cout<<"enter the array :";
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    
    for(int j=n;j>=0;j--)
    {
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                  
                swap(arr[i+1],arr[i]);
            }
        }
        
    }
    
    for(int i=0;i<6;i++)
        {
           cout<<arr[i]<<" ";
        }
}