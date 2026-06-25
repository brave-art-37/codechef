#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  string ans="";
  for(int i=0;i<n;i++){
    if(n&1 && i==n-1) ans+=(char)('z'+'a'-s[i]);
    else if(i&1) ans+=(char)('z'+'a'-s[i-1]);
    else ans+=(char)('z'+'a'-s[i+1]);
  }
  cout<<ans<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


