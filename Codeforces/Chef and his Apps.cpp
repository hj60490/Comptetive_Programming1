#include <bits/stdc++.h>
using namespace std;

void solve(){
   
    int s,x,y,z;
    cin >> s>>x >> y >>z;
    int vac = s-(x+y);
    if(vac>=z)cout<<"0"<<endl;
    else {
        if((vac+x)>=z || (vac+y)>=z)cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
