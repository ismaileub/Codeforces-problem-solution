#include<iostream>

using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string str;
        cin>>str;
        int length = str.size();
        if(length<=10) cout<<str<<endl;
        else cout<<str[0]<<length-2<<str[length-1]<<endl;
    }
    }
