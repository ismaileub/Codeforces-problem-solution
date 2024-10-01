#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int burles1 = 0;
        int burles2 = 0;

        if (n == 1) {
            cout << 1 << " " << 0 << endl;
            continue;
        } else if (n == 2) {
            cout << 0 << " " << 1 << endl;
            continue;
        }


        int a = n / 3;
        int b = n / 3;

        if (n % 3 == 0) {
            burles1 = a;
            burles2 = b;
        } else if (n % 3 == 1) {
            burles1 = a + 1;
            burles2 = b;
        } else if (n % 3 == 2) {
            burles1 = a;
            burles2 = b + 1;
        }

        cout << burles1 << " " << burles2 << endl;
    }

    return 0;
}
