#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>arr{2,6,8,9,4,7,3};
    // vector<int>brr{5,9,3,6,7,1,9};

    // vector<int>ans;

    // for(int i=0;i<arr.size();i++)
    // {
    //     for(int j=0;j<brr.size();j++)
    //     {
    //         if(arr[i]==brr[j])
    //         {
    //              brr[j]=-1;
                 
    //             //  ans.push_back(arr[i]);
    //             //  ans.push_back(brr[j]);
    //         int value=ans[i];
    //         if(value!=-1)
    //         {
    //             ans.push_back(value);
    //         }
            
    //         }
           
    //     }

    // }

    
    // if(ans!=-1)
    // {
    //     for(int n=0;n<brr.size();n++)
    //     {
    //         cout<<ans[n]<<endl; 
    //     }
    // }
    //  for(int l=0;l<brr.size();l++)
    // {
    //     cout<<value[l]; 
    // }
    // sum of pairs
    int sum;
    cout<<"enter the value :";
    cin>>sum;
    vector<int>arr{2,5,6,8,6,9};
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
           {
             for( int k=i+2;k<arr.size();k++)
             {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"it is founded "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" equal to the "<<sum<<endl;
                }
             }
              
              
           }
    }

    // for(auto value:ans)
    // {
    //     cout<<value<<" ";
    // }
   

}
