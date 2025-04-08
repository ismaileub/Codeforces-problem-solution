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
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
            int temp = -1;
        for(int j=2; j<n; j++)
        {
            if(arr[j-2]==arr[j] && arr[j-1]==arr[j])
            {
                temp = arr[j];
                break;
            }
        }

        cout<<temp<<endl;
    }
}
