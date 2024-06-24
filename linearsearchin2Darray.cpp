//linear search in 2D array
#include<iostream>
using namespace std;
// use function to check the value/key
bool value(int arr[][3],int row,int col,int key)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
           
        }
        cout<<endl;
    }
    return false;
}
int main()
{
    // initializaton
    int arr[3][3];
    int row=3;
    int col =3;
    int key;
    // enter the key/value which you want to search
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"enter the key "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    // give answer 
    if(value(arr,row,col,key))
    {
        cout<<"found"<<endl;

    }
    else
    {
        cout<<"not found";

    }

    return 0;
}