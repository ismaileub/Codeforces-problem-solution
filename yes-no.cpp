#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
         if (tolower(str[0]) == 'y' && tolower(str[1]) == 'e' && tolower(str[2]) == 's')
        {

            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "No"<<endl;
        }
    }

    return 0;
}

