#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;
int main()
{
    int zero,two,one;
    zero,two,one=0;
    vector<int>num={0,1,2,1,0,0,1,1,0,2};
    for(int i=0;i<num.size();i++)
    {
        if(num[i]==0)
        {
            zero++;

        }
        else if(num[i]==1)
        {
            one++;
            
        }
        else if(num[i]==2)
        {
            two++;
            
        }
    }
    int i=0;
    while(zero--)
    {
        if(num[i]==0)
        {
            i++;
        }
    }
    while(one--)
    {
        if(num[i]==1)
        {
            i++;
        }
    }
    while(two--)
    {
       if(num[i]==2)
       {
          i++;
       }
    }
    for(int j=0;j<num.size();j++)
    {
        cout<<num[j];
    }
}