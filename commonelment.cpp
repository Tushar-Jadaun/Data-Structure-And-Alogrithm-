#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr={2,3,4,6,5,8};
     vector<int>mrr={25,55,35,95,25,8};
     for(int i=0;i<arr.size();i++)
     {
        for(int j=0;j<mrr.size();j++)
        {
            if(arr[i]==mrr[j])
            {
                cout<<mrr[j];
                return 0;

            }
            else
            {
                cout<<"not matched";
                return 0;
            }
        }
     }

}