#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int a,b,c;cin>>a>>b>>c;
  if(a>50) cout<<"A\n";
  else if(b>50) cout<<"B\n";
  else if(c>50) cout<<"C\n";
  else cout<<"NOTA\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


