#include<iostream>
using namespace std;
int main()
{
    int num,k;

    cin>>num>>k;
    while(k--)
    {
        if(num%10==0)
        {
            num = num/10;
        }
        else
        {
            num--;
        }

    }
    cout<<num;
}
