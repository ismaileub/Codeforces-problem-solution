#include<iostream>
using namespace std;

bool isEven(int n)
{
    return n%2==0;
}

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

        int odd = 0,even=0,match=0;
        for(int j=0; j<n; j++)
        {
            if(isEven(j))
            {
                if(isEven(arr[j]))
                {
                    match++;
                }
                else
                {
                    even++;
                }
            }

            else
            {
                if(!isEven(arr[j]))
                {
                    match++;
                }
                else
                {
                    odd++;
                }
            }
        }

        if(match==n) cout<<0<<endl;
        else if(even == odd) cout<<even<<endl;
        else cout<<-1<<endl;

    }
}
