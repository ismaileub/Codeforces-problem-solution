#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }

        int count1 = 0, count2 = 0;

        auto it = s.begin();
        int s1 = *it;
        it++;
        int s2 = *it;

        // Count occurrences of s1 and s2 in the array
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == s1)
            {
                count1++;
            }
            else if (arr[i] == s2)
            {
                count2++;
            }
        }


        int unique = (count1 < count2) ? s1 : s2;

        // Find the index of the unique element in the array (1-based index)
        auto iterator = find(arr.begin(), arr.end(), unique);

        //int index = iterator - arr.begin() + 1;
        int index = distance(arr.begin(), iterator) + 1;

        cout << index << endl;
    }

    return 0;
}
