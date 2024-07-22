#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int findunique(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<arr.size();i++)
{
    cin >> arr[i];
}
int uniqueElement=findunique(arr);
cout<<uniqueElement<<endl;
return 0;
}