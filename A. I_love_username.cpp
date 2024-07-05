#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N, count=0;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++ )
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];


    for(int i=0; i<N; i++ )
    {
        if(arr[i]>max)
        {
            max = arr[i];
            count++;
        }
        if(arr[i]<min)
        {
            min = arr[i];

            count++;
        }

    }
    cout<<count<<endl;

    return 0;

}
