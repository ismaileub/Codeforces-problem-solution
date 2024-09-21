#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    int maxElement =  *max_element(arr, arr+N);
    int total=0;

    for(int j=0; j<N; j++)
    {
        if(arr[j]==maxElement)
        {
            continue;
        }
        else
        {
            total+= abs(arr[j]-maxElement);
        }
    }

    cout << total<<endl;

    return 0;
}
