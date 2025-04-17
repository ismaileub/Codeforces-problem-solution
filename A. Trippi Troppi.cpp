#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string str;
        getline(cin, str);

        stringstream ss(str);
        string word;
        string modernName;

        int count = 0;
        while (ss >> word && count < 3)
        {
            modernName += word[0];
            count++;
        }

        cout << modernName << endl;
    }

    return 0;
}
