#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // If n is not divisible by 4, it's impossible to form the required array
        if (n % 4 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int arr[n];
            int even = 2;
            int odd = 1;

           int evenSum=0;
            for (int i = 0; i < n / 2; i++) {
                arr[i] = even;
                evenSum+=even;
                even += 2;

            }

            int oddSum=0;
            for (int i = n / 2; i < n - 1; i++) {
                arr[i] = odd;
                oddSum+=odd;
                odd += 2;
            }


            arr[n - 1] = evenSum-oddSum;


            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
