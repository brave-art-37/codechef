#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  vector<int> nos(3);
  cin>>nos[0]>>nos[1]>>nos[2];
  sort(nos.begin(),nos.end());
  int d,e;cin>>d>>e;
  if(nos[2]<=e){
    if(nos[0]+nos[1]<=d) cout<<"YES\n";
    else cout<<"NO\n";
  }
  else if(nos[1]<=e){
    if(nos[0]+nos[2]<=d) cout<<"YES\n";
    else cout<<"NO\n";
  }
  else if(nos[0]<=e){
    if(nos[1]+nos[2]<=d) cout<<"YES\n";
    else cout<<"NO\n";
  }
  else cout<<"NO\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


