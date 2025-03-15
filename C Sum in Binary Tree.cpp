#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long sum = 0;
    while (n > 0) {
        sum += n;
        n /= 2;
    }

    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }

    return 0;
}
