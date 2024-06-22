#include<iostream>
using namespace std;
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
void inc(int arr[],int size)
{
    arr[0]=arr[0]+10;
    print(arr,size);
}

int main()
{
    int arr[10]={5,3};
    int size=2;
    inc(arr,size);
    print(arr,size);



}