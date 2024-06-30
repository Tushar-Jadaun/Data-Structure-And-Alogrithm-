#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>arr={2,3,4,5,6};
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"it is same"<<arr[i+1];
            return 0;
        }
        else
        {
            cout<<"nothing same";
            return 0;
        }
    }

}