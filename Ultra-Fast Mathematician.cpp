#include <iostream>
#include <string>
using namespace std;
int main()
{
    string num1, num2, ans;

    cin >> num1 >> num2;

    for (int i = 0; i < num1.size(); i++)
    {
        if (num1[i] == num2[i])
        {
            ans += '0';
        }
        else
        {
            ans += '1';
        }
    }
    cout << ans;

    return 0;
}
