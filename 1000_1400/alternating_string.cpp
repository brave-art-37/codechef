#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,count=0;cin>>n;
  string s;cin>>s;
  for(char c:s){
    count+=(c=='1');
  }
  cout<<2*min(count,n-count)+(2*count!=n)<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}
