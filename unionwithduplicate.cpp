#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    vector<int>arr{1,2,4,6,8,10};
    vector<int>brr{3,4,5,6};
    vector<int>crr;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<brr.size();j++)
        {
            if (arr[i]==brr[j])
            {
                brr[j]=-1;
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
            crr.push_back(arr[i]);
    }
     for(int i=0;i<brr.size();i++)
    {
        if(brr[i]!=-1)
        {
            crr.push_back(brr[i]);
        }
    }
     for(int i=0;i<crr.size();i++)
    {
      cout<<crr[i]<<" ";
    }
    return 0;
}