#include<iostream>
using namespace std;
int main()
{
    int n,count=0; string s;
    cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]==s[i+1]){
                count++;
            }
        }
        cout<<count;
    return 0;
}
