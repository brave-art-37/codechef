#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  for(int &x:a){cin>>x;}
  for(int &x:b){cin>>x;}
  int maxi=0;
  for(int i=0;i<n;i++){
    maxi=max(maxi, 20*a[i]-10*b[i]);
  }
  cout<<maxi<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


