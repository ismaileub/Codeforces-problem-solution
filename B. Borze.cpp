#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,result,s;

    cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '.')
        {
            s = "0";
        }
        else if(str[i] == '-' && str[i+1] == '.')
        {
            s = "1";
            i++;
        }

         else if(str[i]== '-' && str[i+1] == '-')
        {
            s = "2";
            i++;
        }

        result+=s;


    }

    cout<< result<<endl;

    return 0;

}
