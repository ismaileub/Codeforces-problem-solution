#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>> num;
    string str = "codeforces";
    while(num--)
    {
        char ch;
        cin>>ch;

        if(str.find(ch)!= string::npos)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}

