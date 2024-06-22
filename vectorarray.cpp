// practice of vector array create
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  
    int num;
    cout<<"enter the number : ";
    cin>>num;

    vector<int>arr(num,1);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int>brr{10,20,25,86,97};
    cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    brr.push_back(100);
    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    brr.pop_back();
    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;



}
