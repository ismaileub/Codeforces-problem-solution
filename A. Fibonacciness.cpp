
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getFibonacciness(int a1, int a2, int a4, int a5, int a3) {
    int count = 0;
    if (a3 == a1 + a2) count++;
    if (a4 == a2 + a3) count++;
    if (a5 == a3 + a4) count++;
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        vector<int> a3_options = {
            a1 + a2,
            a4 - a2,
            a5 - a4
        };

        int maxFibonacciness = 0;
        for (int a3 : a3_options) {
            int fibCount = getFibonacciness(a1, a2, a4, a5, a3);
            maxFibonacciness = max(maxFibonacciness, fibCount);
        }

        cout << maxFibonacciness << endl;
    }

    return 0;
}
