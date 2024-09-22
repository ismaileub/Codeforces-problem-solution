#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long total = n*(n+1)/2;
        long long first = n-k;
        long long firstTotal = first*(first+1)/2;
        long long sum = total - firstTotal;
        if(sum%2==0)
        {
            cout<< "YES"<<endl;
        }

        else
        {
            cout<< "NO"<<endl;
        }
    }

    return 0;
}
