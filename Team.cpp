#include<iostream>
using namespace std;
int main(){
        int t,total=0;
        cin>>t;
        while(t--){
            int x,y,z,sum;
            cin>>x>>y>>z;
            sum = x+y+z;
            if(sum>=2) total++;
        }cout<<total;
}
