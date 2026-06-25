#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  int sum=0,odd=0;
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    sum+=tmp;
    odd+=(tmp&1);
  }
  if(sum%2==0 && odd>0) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


