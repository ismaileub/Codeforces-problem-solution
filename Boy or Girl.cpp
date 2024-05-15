#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int count=0;
    string str;
    cin>>str;
   sort(str.begin(), str.end());
    for(int i=0; i<str.size(); i++){
        if(str[i]!=str[i+1]){
            count++;
        }
    }
    if(count%2==0){
        cout<< "CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
