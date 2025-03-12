#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int q;
    cin >> s >> q;
    int n = s.size();

    // Set to store starting indices of "1100"
    set<int> indices;

    // Function to check if "1100" starts at position `idx` in `s`
    auto is1100 = [&](int idx) {
        return idx >= 0 && idx + 3 < n && s.substr(idx, 4) == "1100";
    };

    // Initialize the set with all starting positions of "1100" in `s`
    for (int i = 0; i + 3 < n; i++) {
        if (is1100(i)) {
            indices.insert(i);
        }
    }

    // Process each query
    for (int j = 0; j < q; j++) {
        int i;
        char x;
        cin >> i >> x;
        i--;  // Convert to zero-based index

        // Remove potential "1100" patterns in the affected range
        for (int k = i - 3; k <= i; k++) {
            if (is1100(k)) {
                indices.erase(k);
            }
        }

        // Update character in the string
        s[i] = x;

        // Re-check for "1100" patterns in the affected range
        for (int k = i - 3; k <= i; k++) {
            if (is1100(k)) {
                indices.insert(k);
            }
        }

        // Output result based on whether "1100" is present
        if (!indices.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
