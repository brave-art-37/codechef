#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  int a=0,b=0;
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    if(tmp==1) a=i;
    else if(tmp==n) b=i;
  }
  int ans=a+(n-1-b);
  if(b<a) ans--;
  cout<<ans<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


