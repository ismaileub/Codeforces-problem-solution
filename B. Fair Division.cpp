#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int one = 0, two = 0, total = 0;

        for (int i = 0; i < n; i++)
        {
            int candy;
            cin >> candy;
            total += candy;

            if (candy == 1) one++;
            else two++;
        }

        if (total % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int half = total / 2;

            if (half % 2 == 0 || (half % 2 == 1 && one > 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
