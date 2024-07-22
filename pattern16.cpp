#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {  
        for(int m=1;m<=n-i;m++) 
        {
            cout<<" ";
        }
        k=i-1;
        for(int j=1;j<=i;j++)
      {
        k++;
        cout<<k;
      }
      for(int l=k-1;l>=i;l--)
      {
        cout<<l;
      }
    cout<<endl;
    }
return 0;
}