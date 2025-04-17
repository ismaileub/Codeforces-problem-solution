#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> ans(n+1);
        for(int i=1; i<=n; i++)
        {
            ans[i]=i;
        }

        for(int i=1; i<n; i+=2)
        {
            swap(ans[i],ans[i+1]);
        }
        if(n>1 and n%2!=0)
        {
            swap(ans[n-1],ans[n]);
        }
        for(int i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
