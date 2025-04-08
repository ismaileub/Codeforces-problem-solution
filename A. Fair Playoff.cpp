#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        for(int i=0; i<4; i++)
        {
            cin>>arr[i];
        }

        int win1 = max(arr[0],arr[1]);
        int win2 = max(arr[2],arr[3]);

        sort(arr, arr+4);

        if( (win1+win2) == (arr[3]+arr[2]) )
        {
            cout<< "YES"<<endl;
        }

        else
        {
            cout<< "NO"<<endl;
        }

    }
}
