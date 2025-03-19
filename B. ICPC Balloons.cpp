#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        set<char> charSet;

        for (char c : str) {
            charSet.insert(c);
        }

        int strLen = str.size();
        int setLen = charSet.size();
        int remain = strLen - setLen;

        int ballons = setLen * 2 + remain;

        cout << ballons << endl;
    }

    return 0;
}
