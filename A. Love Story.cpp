#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    string S = "codeforces";
    while(t--)
    {
        int count=0;
        string s;
        cin>>s;
        for(int i=0; i<10; i++)
        {
                if(S[i]!=s[i])
                {
                    count++;
                }
        }

        cout<<count<<endl;

    }

    return 0;
}
