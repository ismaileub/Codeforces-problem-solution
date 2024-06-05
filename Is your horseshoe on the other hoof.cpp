#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int> s;
    for(int i=0; i<4; i++)
    {
        int n;
        cin>>n;
        s.insert(n);

    }
    cout<<4-s.size();


    return 0;

}

