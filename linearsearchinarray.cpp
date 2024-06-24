#include<iostream>
using namespace std;
bool print(int arr[],int size,int num)
{
    for(int i=0;i<=size;i++)
    {
        if(arr[i]==num)
        return true;
        
    }
       return false;
}
int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int arr[]={5,6,2,78,45,7,9,4,12,53};
    int size=10;
    if(print(arr,size,num))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    
return 0;
}
