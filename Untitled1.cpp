#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define INF 1e9
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define pii pair<int, int>
#define fr(i, x, n) for(int i = x; i<n; i++)
#define pb pushback
#define ff first
#define ss second


void solve(){
    int n, k;
    cin>>n>>k;

    map<int, bool> gender;
    map<int, string> name;

    vector<vector<int>> arr(n+1);

    for(int i = 0; i<k; i++){
        int id, room;
        string nam, gen;
        cin>>id>>nam>>room>>gen;

        gender[id] = ((gen.length()==4) ?1:0);
        name[id] = nam;

        arr[room].push_back(id);
    }
    for(auto &i:arr){
        sort(all(i));
    }
    int q;
    cin>>q;
    for(int i = 1; i<=q; i++){
        int x;
        cin>>x;
        cout<<"Query #"<<i<<":"<<endl;
        if(arr[x].empty()){
            cout<<"No Student\n";
            continue;
        }
        for(int j = 0;j<arr[x].size(); j++){
            cout<<arr[x][j]<<" "<<name[arr[x][j]]<<" ";
            if(gender[arr[x][j]]) cout<<"male\n";
            else cout<<"female\n";
        }
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int  = 1;
    cin >> ;
    int x = 1;
    while(--){
        cout<<"Case #"<<x<<":"<<endl;
        solve();
        x++;
    }
    return 0;
}
