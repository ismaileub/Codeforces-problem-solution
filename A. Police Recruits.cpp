#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, crime = 0, police = 0;
    cin >> N;
    vector<int> arr;

    while (N--)
    {
        int P;
        cin >> P;
        arr.push_back(P);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == -1)
        {
            if (police > 0)
            {

                police--;
            }
            else
            {

                crime++;
            }
        }
        else
        {

            police += arr[i];
        }
    }

    cout << crime << endl;

    return 0;
}
