#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int nextPrime(int n) {
    int num = n + 1;
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int main() {
    int n, m;
    cin >> n >> m;


    int next_p = nextPrime(n);


    if (next_p == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

