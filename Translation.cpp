#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin>>str1>>str2;
     reverse(str1.begin(), str1.end());
     /*
     option 2
       int n = str1.length();

    // Swap characters from the beginning and the end
    for (int i = 0; i < n / 2; ++i) {
        swap(str1[i], str1[n - i - 1]);
    }
     */
     if( str1==str2)
     {
         cout<< "YES";
     }
     else
     {
         cout<< "NO";
     }



     return 0;
}
