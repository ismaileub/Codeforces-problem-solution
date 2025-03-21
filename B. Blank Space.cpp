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

        vector<int> v;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
            else
            {
                if (count > 0)
                {
                    v.push_back(count);
                }
                count = 0;
            }
        }


        if (count > 0)
        {
            v.push_back(count);
        }

        int blankSpace = v.empty() ? 0 : *max_element(v.begin(), v.end());
        cout << blankSpace << endl;
    }

    return 0;
}
