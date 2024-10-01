#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
      long long n;
      cin>>n;
      long long arr[n],i;
      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
      }
      for(int i=1;i<=n-2;i++)
      {
          arr[n-1]-=arr[i];
      }
      cout<<arr[n]-arr[n-1]<<endl;

    }
    return 0;
}
