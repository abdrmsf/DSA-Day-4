#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int a=1;a<=n-i;a++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=i-1;k>=1;k--)
        {
            cout<<k;
        }
    cout<<endl;
    }


return 0;
}