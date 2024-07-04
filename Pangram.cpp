#include<iostream>
#include<set>
#include <cctype>   /// for std::tolower
using namespace std;
int main()
{
    int n;
    set<char> s;
    cin>>n;
    while(n--)
    {
        char ch;
        cin>>ch;
        ch = tolower(ch);
        s.insert(ch);
    }


    if(s.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }

    return 0;
}
