// sum of pairs row wise in array
#include<iostream>
using namespace std;
int take(int arr[][3],int row ,int col)
{
    // sum of array
   for(int i=0;i<row;i++)
   {
        int sum=0;
       for(int j=0;j<col;j++)
       {
           
            sum=sum+arr[i][j];
           
       }
        
       cout<<sum<<endl;
      
   } 
   
}
int main ()
{
    // initialization of array 
    int arr[3][3];
    int row=3;
    int col=3;
    // take input 
    for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
             cin>>arr[i][j];
       }
        cout<<endl;
   }
  take(arr,row,col);
  return 0;
}