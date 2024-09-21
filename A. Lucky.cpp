#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;

        int arr[6];

        for (int i = 0; i < 6; ++i)
        {
            arr[i] = str[i] - '0';  // Convert char to int

        }

        if(arr[0]+arr[1]+arr[2] == arr[3]+arr[4]+arr[5])
        {
            cout <<"Yes"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
