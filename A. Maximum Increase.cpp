#include<bits/stdc++.h>
using namespace std;

int main()
{

        int n;
        cin>>n;
        int arr[n];
        vector<int> vec;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int count = 1;
        for(int i=1; i<n; i++)
        {
            if(arr[i]>arr[i-1])
            {
                count++;
            }
            else
            {
                vec.push_back(count);
                count=1;
            }

        }
        vec.push_back(count);

        auto maxLen = *max_element(vec.begin(), vec.end());

        cout<<maxLen<<endl;




    return 0;
}
