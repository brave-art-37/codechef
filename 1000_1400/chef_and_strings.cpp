#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  long long n, ans=0, last;
  cin>>n;
  cin>>last;
  for(int i=0;i<n-1;i++){
    long long tmp;cin>>tmp;
    ans+=abs(tmp-last)-1LL;
    last=tmp;
  }
  cout<<ans<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


