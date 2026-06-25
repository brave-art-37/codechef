#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    a[i]=tmp;
    b[i]=tmp;
  }
  sort(b.begin(),b.end());
  vector<int> ind;
  for(int i=0;i<n;i++){
    if(a[i]==b[i]) continue;
    ind.push_back(i);
  }
  if(ind.size()==0 || (ind.size()==2 && abs(ind[1]-ind[0])==1)) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}
