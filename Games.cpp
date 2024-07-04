#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int homeUniforms[N], guestUniforms[N], count = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> homeUniforms[i] >> guestUniforms[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (homeUniforms[i] == guestUniforms[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}