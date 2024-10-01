#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMaxScore(const vector<int>& a, int n, int start) {
    int max_val = 0;
    int count = 0;
    for (int i = start; i < n; i += 2) {
        max_val = max(max_val, a[i]); // Track the maximum value
        count++;                      // Increment the count of selected elements
    }
    return max_val + count;            // Return the score
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the array
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Array elements
        }

        // Compute the maximum score either starting from index 0 or from index 1
        int score_from_0 = getMaxScore(a, n, 0); // Start from index 0
        int score_from_1 = getMaxScore(a, n, 1); // Start from index 1

        // Output the maximum of the two scores
        cout << max(score_from_0, score_from_1) << endl;
    }

    return 0;
}

