#include <iostream>
using namespace std;

int main() {
    int t, x;
    cin >> t;

    while (t--) {
        cin >> x;
        int digit = x % 10;
        int length = to_string(x).size();

        cout << (digit - 1) * 10 + (length * (length + 1)) / 2 << endl;
    }

    return 0;
}
