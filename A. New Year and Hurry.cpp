#include<iostream>
using namespace std;
int main()
{
    int problem, needTime, extraTime, count=0;
    cin>>problem>>needTime;
    extraTime = 240 - needTime;

    int i=1, j;
    while(extraTime >= i*5 && count<problem)
    {
        count++;
        extraTime-=i*5;
        i++;
    }

    cout<<count<<endl;

    return 0;
}
