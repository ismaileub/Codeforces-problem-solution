#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int count =0;
        cin>>str;
        int len = str.size();
        for(int i=0; i<len-1; i++)
        {
           if(str[i]==str[i+1])
            count++;
        }

            if(count!=0)
            {
                cout<<1<<endl;
                continue;
            }

        cout<<len<<endl;
    }

    return 0;
}
