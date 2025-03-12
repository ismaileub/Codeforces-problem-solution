#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k, totalPrice=0;
        cin>>n>>k;
        vector<ll>  UniqueBrandWithPrice(k+1,0);
        for(int i=0; i<k; i++)
        {
            ll b,p;
            cin>>b>>p;
            UniqueBrandWithPrice[b]+=p;
        }

        sort(UniqueBrandWithPrice.begin(), UniqueBrandWithPrice.end(), greater<ll>());


            for(int i=0; i < n && i < UniqueBrandWithPrice.size(); i++)
            {
                totalPrice+=UniqueBrandWithPrice[i];
            }



        cout<< totalPrice<<endl;

    }

    return 0;

}
