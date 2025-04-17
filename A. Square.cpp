#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        set<int> s_x, s_y;

        for(int i = 0; i < 4; i++)
        {
            cin >> x >> y;
            s_x.insert(x);
            s_y.insert(y);
        }

        auto it_1st = s_x.begin();
        auto it_2nd = next(it_1st);

        int side = *it_2nd - *it_1st;

        cout << side * side << endl;
    }
}
