#include <bits/stdc++.h>
using namespace std;

bool isValidSpelling(string s)
{
    string correct = "Timur";
    sort(s.begin(), s.end());
    sort(correct.begin(), correct.end());
    return s == correct;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (n == 5 && isValidSpelling(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
