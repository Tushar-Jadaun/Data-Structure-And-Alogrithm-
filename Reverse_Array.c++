#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,8,6,4,7,3};
   
    
    int start=0;
    int end=5;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}
