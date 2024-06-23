// intersection of array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int>arr{2,5,6,4,9,7,2};
    vector<int>brr{3,5,9,25,35,2};


    vector<int>ans;
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<brr.size();j++)
        {
            if(arr[i]==brr[j])
            {
                //add in ans array
               brr[j]=-1;
               ans.push_back(arr[i]);
               
                

            }

        }

    }
    // print the array
    for(auto value:ans)
    {
        cout<<value<<" ";
    }
    return 0;
}
