#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
  int m;
    cin>>m;
    vector<int>arr(m);
    int n;
    cin>>n;
    vector<int>brr(n);
    vector<int>crr;
    for(int i=0;i<arr.size();i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<brr.size();i++)
    {
       cin>>brr[i];
    }
     for(int i=0;i<arr.size();i++)
    {
       crr.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++)
    {
       crr.push_back(brr[i]);
    }
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }


return 0;
}