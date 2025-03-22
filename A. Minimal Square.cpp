#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int s = min(max(a*2,b),max(a,b*2));

        cout<< s*s<<endl;
    }

    return 0;
}
