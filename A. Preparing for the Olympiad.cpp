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
        int mono[n],ste[n];
         int monoCount = 0, steCount=0;
        for(int i=0; i<n; i++)
            {
                cin>>mono[i];
                monoCount+=mono[i];
            }

        for(int i=0; i<n; i++)
            cin>>ste[i];


        if(n==1)
        {
            cout<<mono[0]<<endl;
            continue;
        }

         for(int i=1; i<n; i+=2)
            {
                steCount+=ste[i];
            }

                cout<< abs(monoCount - steCount)<<endl;

    }

    return 0;
}
