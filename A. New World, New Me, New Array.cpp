#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;

        if(k==0)
        {
            cout<<0<<endl;
            continue;
        }
        k= abs(k);
        p = abs(p);
        if(n*p <k)
        {
            cout<<-1<<endl;
            continue;
        }

        if(p>=k)
        {

            cout<<1<<endl;
            continue;
        }

        int count = k/p;
        if(k%p!=0) count++;
       // cout << (int)ceil((double)abs(k) / p) << endl;
        cout<<count<<endl;
    }

    return 0;
}
