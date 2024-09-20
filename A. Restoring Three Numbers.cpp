#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i=0,n,array[4], a,b,c;
    while( i<4 && cin>>n)
    {
        array[i]=n;
        i++;
    }

    sort(begin(array), end(array));

    a =  array[3]- array[0];
    b =  array[3]- array[1];
    c =  array[3]- array[2];
    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;


}
