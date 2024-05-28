#include <iostream>
#include <set>
using namespace std;

int main() {
    int year;
    cin >> year;

    while (true) {
        year++;
        set<int> s;
        int temp = year;

        while (temp != 0) {
            int digit = temp % 10;
            s.insert(digit);
            temp = temp / 10;
        }

        if (s.size() == 4) {
            break;
        }
    }

    cout << year << endl;
    return 0;
}
