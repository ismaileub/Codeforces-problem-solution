#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    for(int i=0; i<s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for(int i=0; i<s1.size(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'y')
        {
            continue;
        }
        else
        {
            //s2 += '.';
            //s2 += s1[i];
            s2.push_back('.');
            s2.push_back(s1[i]);

        }


    }
    cout<<s2;
}
