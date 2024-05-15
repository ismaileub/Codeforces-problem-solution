#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int>v;
	string input;
	int i, n;

	cin >> input;
	int len = input.length();

	for (i = 0; i < len; i++){
		if (input[i] != '+') {
            n = input[i] - '0'; // convert char to int
            v.push_back(n);
		}
	}

	sort(v.begin(), v.end());

	for (i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i <= v.size() - 2 && v.size() > 1)
            cout << "+";
	}

	return 0;
}

