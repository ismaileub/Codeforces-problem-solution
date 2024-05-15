#include<iostream>
using namespace std;
int main()
{
    int t, count=0;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(str=="++X" || str=="X++") count++;
        else count--;

    }
    cout<<count;
}
