#include<bits/stdc++.h>
using namespace std;


bool isOrdinary(int n)
{
    string s = to_string(n);
    for(char ch: s)
    {
        if(ch!=s[0])
            return false;
    }

    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        for(int i=1; i<=n; i++)
        {

            if(isOrdinary(i))
                count++;
        }

        cout<<count<<endl;

    }

    return 0;
}

//above code time limit exceeded
//consider bellow code
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Precomputed ordinary numbers (manually added)
    int ar[] = {
        11,22,33,44,55,66,77,88,99,
        111,222,333,444,555,666,777,888,999,
        1111,2222,3333,4444,5555,6666,7777,8888,9999,
        11111,22222,33333,44444,55555,66666,77777,88888,99999,
        111111,222222,333333,444444,555555,666666,777777,888888,999999,
        1111111,2222222,3333333,4444444,5555555,6666666,7777777,8888888,9999999,
        11111111,22222222,33333333,44444444,55555555,66666666,77777777,88888888,99999999,
        111111111,222222222,333333333,444444444,555555555,666666666,777777777,888888888,999999999
    };

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int count = 0;

        if (n < 10) {
            count = n;
        } else {
            count = 9;


            for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++) {
                if (ar[i] <= n)
                    count++;
                else
                    break;
            }
        }

        cout << count << '\n';
    }

    return 0;
}


