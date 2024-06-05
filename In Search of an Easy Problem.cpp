#include<iostream>
using namespace std;
int main()
{

    int n, count=0;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1){
            count++;
        }
    }
    if(count==0) cout<<"EASY";

    else cout<<"HARD";

    return 0;

}
