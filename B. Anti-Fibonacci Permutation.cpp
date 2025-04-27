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
        vector<int>v;
        for(int i=n;i>=1;i--)v.push_back(i);
        if(n==3)
        {
            cout<<"1 3 2"<<endl;
            cout<<"3 1 2"<<endl;
            cout<<"3 2 1"<<endl;
        }
        else if(n%2==0)
        {
            for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
            cout<<endl;
            for(int i=0;i<n-1;i++)
            {
                swap(v[i],v[i+1]);
                for(int j=0;j<v.size();j++)cout<<v[j]<<" ";
                cout<<endl;
            }
        }
        else
        {
            for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
            cout<<endl;
            for(int i=0;i<v.size()-2;i++)cout<<v[i]<<" ";
            cout<<v[n-1]<<" "<<v[n-2]<<endl;
            for(int i=1;i<n-1;i++)
            {
                swap(v[i],v[i+1]);
                for(int j=0;j<v.size();j++)cout<<v[j]<<" ";
                cout<<endl;
            }
        }
    }
}
