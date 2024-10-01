#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,total=0;
    cin>>a>>b>>c>>d;

    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if((str[i]- '0') == 1)  total+=a;
        else if((str[i]- '0')== 2)  total+=b;
        else if((str[i]- '0') == 3)  total+=c;
        else if((str[i]- '0') == 4)  total+=d;
    }

    cout<< total<<endl;

    return 0;
}
