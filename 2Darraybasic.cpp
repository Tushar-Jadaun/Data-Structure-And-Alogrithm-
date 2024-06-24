#include<iostream>
using namespace std;
int main()
{
   // initialization of array 
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   cout<<arr[1][2]<<" "<<endl;
   int row=3;
   int col=3;
   // row wise 
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
             cout<<arr[i][j]<<" ";
       }
        cout<<endl;
   }

   // column wise
   cout<<" this is column wise"<<endl;

    for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
             cout<<arr[j][i]<<" ";
       }
        cout<<endl;
   }
}