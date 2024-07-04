#include<bits/stdc++.h>
using namespace  std;
int main()
{

    int N;
    cin>>N;
    while(N--)
    {
        int num, ans;
        cin>>num;
        vector<int> v;
        for(int i=0; num; i++)
        {
            if(num%10)
            {
                ans = (num%10) * pow(10,i);
                v.push_back(ans);
            }
            num/=10;
        }

        cout<<v.size()<<endl;

        for(int data : v)
        {
            cout<<data<<" ";
        }
        cout<<endl;

    }

    return 0;
}
