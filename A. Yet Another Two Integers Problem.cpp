#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b;
    long long diff, result;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            diff = abs(a - b);

            result = diff / 10 + (diff % 10 != 0);
            cout << result << endl;
        }
    }
    return 0;
}
