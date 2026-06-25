#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  long long n,b,m,count=0;cin>>n>>b>>m;
  while(n){
    count+=m*((n+1LL)/2);
    n-=(n+1LL)/2;
    m<<=1;
    count+=b;
  }
  count-=b;
  cout<<count<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


