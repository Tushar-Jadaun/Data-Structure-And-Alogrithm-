#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size :";
    cin>>n;
    int arr[100];
    cout<<"enter the array :";
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}