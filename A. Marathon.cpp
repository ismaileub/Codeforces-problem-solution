#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d, position =0;

        cin>> a>>b>>c>>d;

        if(a<b) position++;
        if(a<c) position++;
        if(a<d) position++;

        cout << position<<endl;

    }

    return 0;
}
