#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  long long n,m;cin>>n>>m;
  long long dist=0;
  while(n--){
    long long tmp;cin>>tmp;
    dist+=max(tmp-1LL,m-tmp);
  }
  cout<<dist<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


