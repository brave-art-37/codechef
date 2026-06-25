#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,k;cin>>n>>k;
  int curr=0;
  vector<int> nos(n);
  for(int &x:nos){cin>>x;}
  for(int i=1;i<=n;i++){
    curr+=nos[i-1];
    //cout<<curr<<' ';
    if(curr<k){
      cout<<"No "<<i<<"\n";
      return;
    }
    curr-=k;
  }
  cout<<"Yes\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


