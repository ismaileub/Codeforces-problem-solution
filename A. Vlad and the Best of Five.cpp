#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int A = count(str.begin(), str.end(), 'A');
        int B = str.length() - A;

        cout << (A > B ? 'A' : 'B') << endl;
    }

    return 0;
}
