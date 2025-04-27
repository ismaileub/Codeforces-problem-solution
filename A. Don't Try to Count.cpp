#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
        {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int count = 0;

        bool found = false;

        for (int i = 0; i <= 25; ++i)
            {
            if (x.find(s) != string::npos)
            {
                found = true;
                break;
            }
            x += x;
            count++;
        }

        if (found)
            {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
