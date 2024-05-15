#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int num[100];
    string s;
    cin>>s;
    int j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            num[j++]=s[i]-'0';
        }
    }
    sort(num, num+j);
    for(int i=0; i<j; i++)
    {
        cout<<num[i];
        if(i==j-1)
        {
            break;
        }
        cout<<"+";
    }
    return 0;

}
