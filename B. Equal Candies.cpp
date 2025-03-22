#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n];
        set<int> s;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(n==1 || s.size()==1)
        {
            cout<<0<<endl;
            continue;
        }

        int min = *min_element(arr,arr+n);
            for(int j=0; j<n; j++)
            {
                    sum += (arr[j] - min);
            }

            cout << sum<<endl;


    }

    return 0;
}
