#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int sec=-1;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>sec)
        {
            sec=arr[i];
        }
    } 
    int seco=-1;
    for(int j=0;j<size;j++)
    {
        if(sec!=arr[j])
        {
             seco=max(seco,arr[j]);
        }
    }
    cout<<seco;

    return 0;
    
}