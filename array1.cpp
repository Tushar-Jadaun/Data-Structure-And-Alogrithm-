// count the numbers in aaray
#include<iostream>
using namespace std;
int main()
{
    
    int arr[]={0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,2,4};
    int size = 17;
    int inc=0;
    int dec=0;

    for(int i=0;i<=size;i++)
    {
        if(arr[i]==1)
        {
            inc++;
        }
        if(arr[i]==0)
        {
            dec++;
        }

    }
    // print the number 
    cout<<inc<<endl;
    cout<<dec<<endl;
}
