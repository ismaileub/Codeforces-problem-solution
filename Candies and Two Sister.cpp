#include<iostream>
using namespace std;
int main()
{

    int T;
    cin>>T;
    long long int num;
    while(T--)
    {
        long long int num, result;
        cin>>num;
        if(num%2==0)
        {
            result = num/2 -1;
            cout<<result<<endl;
        }
        else
        {
            result = num/2;
            cout<<result<<endl;

        }
    }

    return 0;
}
