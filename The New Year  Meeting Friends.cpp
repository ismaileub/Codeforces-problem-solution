#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    vector<int> v;
    while(n--)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cout<<(v[2] - v[1]) + (v[1] - v[0]) ;

    return 0;

}
