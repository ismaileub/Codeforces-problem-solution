#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;


    while(t--)
    {
        cin>>n;
        int i=0, a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n);
        bool possible = true;

        for(int j =0; j<n-1; j++)
        {
            if(a[j+1] - a[j] >1)
            {
                possible = false;
                cout<< "NO"<<endl;
                break;
            }


           }

           if(possible)
           {
               cout<< "YES"<<endl;
           }


    }



    return 0;
}

