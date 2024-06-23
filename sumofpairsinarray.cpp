//sum  pairs in array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
   
    //sum of pairs
    int sum;
    cout<<"enter the value :";
    cin>>sum;
    vector<int>arr{2,5,6,8,6,9};
    // use a loop 
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
           {
            
             for( int k=i+2;k<arr.size();k++)
             {
                // check a number is equal to sum or not
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"it is founded "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" equal to the "<<sum<<endl;
                }
             }
              
              
           }
    }

   
return 0;

}
