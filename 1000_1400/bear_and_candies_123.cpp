#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int a,b;cin>>a>>b;
  int curr=0;
  while(a>=0 && b>=0){
    if(curr&1) a-=curr;
    else b-=curr;
    curr++;
  }
  if(a<0) cout<<"Bob\n";
  else cout<<"Limak\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


