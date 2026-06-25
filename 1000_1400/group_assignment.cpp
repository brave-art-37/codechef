#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> freq(n-1,0);
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    freq[tmp-2]++;
  }
  int isit=1;
  for(int i=2;i<=n;i++){
    isit&=(freq[i-2]%i==0);
  }
  if(isit) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


