#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  string a,b;cin>>a>>b;
  int one=0;
  for(char c:a){
    one+=(c=='1');
  }
  for(char c:b){
    one-=(c=='1');
  }
  if(one==0) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


