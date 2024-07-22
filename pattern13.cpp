#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int n,z;
    cin>>n;
    z=n*2-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=z-2*i;k>=1;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

