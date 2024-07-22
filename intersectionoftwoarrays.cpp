#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,3,4,6,8};
    vector<int>brr{3,3,4,9,10};
    vector<int>crr;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<brr.size();j++)
        {
            if (arr[i]==brr[j])
            {
                brr[j]=-1;
                crr.push_back(arr[i]);
                //break;
            }
        }
    }
    for(int k=0;k<crr.size();k++)
    {
        cout<<crr[k]<<" ";
    }


return 0;
}