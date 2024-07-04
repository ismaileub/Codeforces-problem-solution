#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n, p, q, temp;
    set<int> s;
    cin >> n;
    cin >> p;
    while (p--)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
