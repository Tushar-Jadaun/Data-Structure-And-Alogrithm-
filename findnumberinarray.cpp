#include<iostream>
using namespace std;
int ans(int arr[],int size,int num)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            return true;
        }
    }
        return false;

}
int main()
{

    int arr[]={10,25,56,86,45,75,96,35,95,65};
    int size = 10;
    int num;
    cout<<"enter the number :";
    cin>>num;
    ans(arr,size,num);
    if(ans(arr,size,num))
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    
return 0;
}