#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  vector<int> freq(26);
  for(int i=0;i<n;i++){
    freq[s[i]-'a']++;
  }
  int isit=0;
  for(int i:freq){
    isit|=(i&1);
  }
  if(isit) cout<<"NO\n";
  else cout<<"YES\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


