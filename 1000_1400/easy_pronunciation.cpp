#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  int maxi=0,curr=0;
  for(int i=0;i<n;i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
      maxi=max(maxi,curr);
      curr=0;
    }
    else curr++;
  }
  maxi=max(maxi,curr);
  if(maxi>3) cout<<"NO\n";
  else cout<<"YES\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


