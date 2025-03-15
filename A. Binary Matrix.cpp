#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> row_xor(n, 0), col_xor(m, 0);

    for (int i = 0; i < n; ++i)
    {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j)
        {
            int value = row[j] - '0';
            row_xor[i] ^= value;
            col_xor[j] ^= value;
        }
    }

    int row_odd = 0, col_odd = 0;

    for (int i = 0; i < n; ++i)
    {
        if (row_xor[i] == 1) row_odd++;
    }
    for (int j = 0; j < m; ++j)
    {
        if (col_xor[j] == 1) col_odd++;
    }

    cout << max(row_odd, col_odd) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
