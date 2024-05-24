#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n>>str;
    int Danik=0, Anton=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='A')
            Anton++;

        else
            Danik++;
    }

    if(Anton>Danik)
    {
        cout<< "Anton";
    }
    else if(Danik>Anton)
    {
        cout<< "Danik";

    }
    else
    {
        cout<< "Friendship";

    }
    return 0;
}
