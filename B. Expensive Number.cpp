#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        long double minCost = 1e20;
        int minRemoved = n - 1;

        // Try all non-empty subsets (1 to (1 << n) - 1)
        for (int mask = 1; mask < (1 << n); ++mask) {
            string number = "";
            int digitSum = 0;

            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    number += s[i];
                    digitSum += (s[i] - '0');
                }
            }

            if (digitSum == 0) continue; // avoid division by zero

            // simulate large number division as long double
            long double numVal = 0;
            for (char c : number) {
                numVal = numVal * 10 + (c - '0');
            }

            long double cost = numVal / digitSum;
            int removed = n - __builtin_popcount(mask);

            if (cost < minCost || (abs(cost - minCost) < 1e-9 && removed < minRemoved)) {
                minCost = cost;
                minRemoved = removed;
            }
        }

        cout << minRemoved << "\n";
    }
    return 0;
}
