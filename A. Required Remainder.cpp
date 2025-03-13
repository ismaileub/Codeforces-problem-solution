#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long int x,y,n,a,k;
        cin>>x>>y>>n;

        a = (n-y)/x;
        k = a*x+y;

        cout<<k<<endl;

    }




    return 0;
}
