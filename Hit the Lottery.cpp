#include <iostream>
using namespace std;
int main()
{
    int money, temp, count = 0; // 1, 5, 10, 20, 100
    cin >> money;
    while (1)
    {
        if (money >= 100)
        {
            temp = money / 100;
            count += temp;
            money %= 100;
        }
        else if (money >= 20)
        {
            temp = money / 20;
            count += temp;
            money %= 20;
        }
        else if (money >= 10)
        {
            temp = money / 10;
            count += temp;
            money %= 10;
        }

        else if (money >= 5)
        {
            temp = money / 5;
            count += temp;
            money %= 5;
        }
        else
        {
            count += money;
            break;
        }
    }
    cout << count << endl;

    return 0;
}