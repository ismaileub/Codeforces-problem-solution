#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Miller-Rabin helpers
ll mulmod(ll a, ll b, ll mod) {
    ll result = 0;
    a %= mod;
    while (b) {
        if (b & 1) result = (result + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return result;
}

ll powmod(ll a, ll b, ll mod) {
    ll result = 1;
    a %= mod;
    while (b) {
        if (b & 1) result = mulmod(result, a, mod);
        a = mulmod(a, a, mod);
        b >>= 1;
    }
    return result;
}

bool millerTest(ll d, ll n, ll a) {
    ll x = powmod(a, d, n);
    if (x == 1 || x == n - 1)
        return true;
    while (d != n - 1) {
        x = mulmod(x, x, n);
        d *= 2;
        if (x == 1) return false;
        if (x == n - 1) return true;
    }
    return false;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    ll d = n - 1;
    while (d % 2 == 0) d /= 2;

    // Bases good enough for 64-bit integers
    vector<ll> bases = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (ll a : bases) {
        if (a >= n) break;
        if (!millerTest(d, n, a)) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        string y = "";
        for (int i = 0; i < k; i++) y += x;

        if (y.size() > 18) {
            cout << "NO" << endl; // too big to be prime
            continue;
        }

        ll num = stoll(y);
        cout << (isPrime(num) ? "YES" : "NO") << endl;
    }
    return 0;
}
