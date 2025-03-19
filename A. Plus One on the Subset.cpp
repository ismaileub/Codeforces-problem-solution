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

        int operations = abs(*max_element(arr,arr+n) - *min_element(arr, arr+n));

        cout<<operations<<endl;
    }

    return 0;
}
