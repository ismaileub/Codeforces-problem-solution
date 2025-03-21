#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long max_product = 0;

        for (int i = 0; i < n; i++) {
            long long current_product = 1;

            // Increment the current digit by 1
            arr[i] += 1;

            // Calculate the product
            for (int j = 0; j < n; j++) {
                current_product *= arr[j];
            }

            // Update maximum product
            max_product = max(max_product, current_product);

            // Restore the original value
            arr[i] -= 1;
        }

        cout << max_product << endl;
    }

    return 0;
}
