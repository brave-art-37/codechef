#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,x,s;cin>>n>>x>>s;
  while(s--){
    int a,b;cin>>a>>b;
    if(a==x) x=b;
    else if(b==x) x=a;
  }
  cout<<x<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


