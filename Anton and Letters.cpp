#include <iostream>
using namespace std;
#include <set>
int main()
{
    set<char> s;
    while (1)
    {
        char ch;
        cin >> ch;
        if (ch == '{' || ch == ',')
        {
            continue;
        }

        if (ch == '}')
        {
            break;
        }

        s.insert(ch);
    }
    int distinctLetter = s.size();
    cout << distinctLetter;

    return 0;
}