#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int n,a,k,b,s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        for(int s=1;s<=n-i;s++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            a=pow(2,j-1);
            cout<<a;
            k=j;
        }
        for(int l=k-1;l>=1;l--)  
        {
            b=pow(2,l-1);
            cout<<b;
        }
        cout<<endl;
    }
return 0;
}