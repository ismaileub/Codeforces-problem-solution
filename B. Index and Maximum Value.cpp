#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        int current_max = *max_element(a.begin(), a.end());

        vector<int> result;

        while (m--)
        {
            char op;
            int l, r;
            cin >> op >> l >> r;


            if (l <= current_max && current_max <= r)
            {
                if (op == '+')
                {
                    current_max += 1;
                }
                else if (op == '-')
                {
                    current_max -= 1;
                }
            }


            result.push_back(current_max);
        }


        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
