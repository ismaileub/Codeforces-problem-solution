#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, H;
    cin>>N>>H;
    int count=0;
    while(N--)
    {
        int F;
        cin>>F;
        if(F<=H){
            count++;
        }
        else{
            count+=2;
        }
    }
    cout<<count;
}
