#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(str =="us")
        {
            cout<<'i'<<endl;
            continue;
        }


            str.pop_back();
            str.pop_back();
            str.push_back('i');

            cout<<str<<endl;

    }

    return 0;
}
