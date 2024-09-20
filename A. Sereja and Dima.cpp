#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, Sereja = 0, Dima = 0;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int j = 0; j < n; j++)
    {

        int large;
        if (arr.front() >= arr.back())
        {
            large = arr.front();
            arr.erase(arr.begin());
        }
        else
        {
            large = arr.back();
            arr.pop_back();
        }


        if (j % 2 == 0)
        {
            Sereja += large;
        }
        else
        {
            Dima += large;
        }
    }

    cout << Sereja << " " << Dima << endl;

    return 0;
}
