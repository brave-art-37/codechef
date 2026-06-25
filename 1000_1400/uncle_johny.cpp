#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,k;cin>>n;
  vector<int> nos(n);
  for(int &x:nos){cin>>x;}
  cin>>k;
  int curr=nos[k-1];
  sort(nos.begin(),nos.end());
  cout<<(find(nos.begin(),nos.end(),curr)-nos.begin()+1)<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


