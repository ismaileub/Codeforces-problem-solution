#include<iostream>
using namespace std;
int main()
{
    int k,w,n;
    cin>>k>>n>>w;
    int sum = k,x, needMoney;
    for(int i=2; i<=w; i++)
    {
        x = k*i;
        sum = sum + x;
    }
    needMoney = sum - n;

    if(needMoney>0)
    {
        cout<<needMoney;
    }
    else
    {
        cout<< "0";
    }

}
