#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;      // first in last out
    s.push("Ismail");
    s.push("Yeasir");
    s.push("Nirob");
    s.push("Atik");

    while(!s.empty())
    {
        string str;
        str = s.top();
        cout<< str<<endl;
        s.pop();
    }

    return 0;
}
