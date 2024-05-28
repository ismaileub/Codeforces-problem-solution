#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int count=0;
    vector<int> total;
    while(N--)
    {
        int enter,exit;
        cin>>enter>>exit;
        count = count - enter + exit;
        total.push_back(count);

    }
       int max_Number = *max_element(total.begin(), total.end());

     cout << max_Number << endl;
    return 0;
}
