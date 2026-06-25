#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,count=0;cin>>n;
  string s;cin>>s;
  reverse(s.begin(),s.end());
  for(int i=0;i<n-1;i++){
    count+=(s[i]=='0' && s[i+1]=='1');
  }
  cout<<count<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


