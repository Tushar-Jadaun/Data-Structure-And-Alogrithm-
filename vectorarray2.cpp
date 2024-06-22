//maximum number 
#include<iostream>
#include<limits.h>

using namespace std;
int main()
{
    int arr[]={1,15,25,35,45,8,9,6};
    int size=8;
    int ans=INT_MIN;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }

    }
    cout<<"this is the maximum number :"<<ans;

}
