#include<iostream>
using namespace std;
void transpose(int arr[][3],int row,int col,int num[][3])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            num[j][i]=arr[i][j];
        }
    }
}
void print(int num[][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int col=3;
    int row=3;
    cout<<"print the 2D array"<<endl;
    print(arr,row,col);
    int num[3][3];
    transpose(arr,row,col,num);
    cout<<"print after transpose"<<endl;
    print(num,row,col);

    
}