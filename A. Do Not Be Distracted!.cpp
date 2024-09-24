#include<iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        char previous, now;
        set<char> s;
        cin>>n;
        cin>>str;
        previous = str[0];
        s.insert(str[0]);
        if(n==1)
        {
            cout<< "YES"<<endl;
            continue;
        }
        bool isValid = true;

        for(int i=1; i<n; i++)
        {

            if(previous==str[i])      //DDBBCCCBBEZ
            {
                continue;
            }
            else
            {
                previous=str[i];
                auto result = s.insert(str[i]);

                if(result.second== false)
                {
                    isValid =false;
                    break;
                }

            }
        }

        if(isValid)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }


    }

    return 0;
}
