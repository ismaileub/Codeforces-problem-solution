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
        string str;
        cin>>str;
        if(n<3)
        {
            cout<<0<<endl;
            continue;
        }

        int Hyphen = count(str.begin(), str.end(), '-');
        int Underscore  = n-Hyphen;

        long long  ans = (Hyphen / 2) * (Hyphen - (Hyphen / 2)) * Underscore;
        cout << ans << '\n';


    }
}
