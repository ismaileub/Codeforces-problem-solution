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
        int arr[n];
        bool allOdd=true,allEven=true;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
                allOdd = false;
            else
                allEven = false;
        }

        if(!allEven)
            cout<< "YES"<<endl;
        else if(allOdd && (n%2==0))
            cout<< "NO2"<<endl;
        else
            cout<< "NO"<<endl;

            }

return 0;
}
