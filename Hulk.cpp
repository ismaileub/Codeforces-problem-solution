#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str1 = "I hate ";
    string str2 = "I love ";
    string newStr = str1;

    for (int i = 2; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            newStr = newStr + "that " + str2;
        }
        else
        {
            newStr = newStr + "that " + str1;
        }
    }

    newStr = newStr + "it";
    cout << newStr;
    return 0;
}