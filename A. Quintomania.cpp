#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool is_perfect = true;


        for (int i = 1; i < n; i++)
        {
            int interval = abs(arr[i] - arr[i - 1]);
            if (interval != 5 && interval != 7)
            {
                is_perfect = false;
                break;
            }
        }

        if (is_perfect)
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
