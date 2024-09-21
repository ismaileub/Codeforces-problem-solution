#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);

        // Read target scores
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--; // Convert to 0-based index

            // Extract the relevant scores
            vector<int> scores(a.begin() + l, a.begin() + r + 1);
            sort(scores.rbegin(), scores.rend()); // Sort in descending order

            long long robinScore = 0, sheriffScore = 0;

            // Calculate scores for Robin and Sheriff
            for (int i = 0; i < scores.size(); i++) {
                if (i % 2 == 0) {
                    robinScore += scores[i];
                } else {
                    sheriffScore += scores[i];
                }
            }


            if (sheriffScore >= robinScore) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
