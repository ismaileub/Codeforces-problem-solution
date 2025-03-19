#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num = 0, count = 0,i=1;
    cin >> n;

    while (1)
    {
        num += (i * (i + 1)) / 2;
        if (num > n) break;
        count++;
        i++;

    }

    cout << count << endl;

    return 0;
}
