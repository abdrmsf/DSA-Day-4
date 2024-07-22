#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j;
            a=j;
        }
        for(int k=a-1;k>=1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
return 0;
}