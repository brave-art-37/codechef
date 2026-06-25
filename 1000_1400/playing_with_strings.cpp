#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  string a,b;cin>>a>>b;
  int count1=0,count2=0;
  for(char c:a){
    count1+=(c=='1');
  }
  for(char c:b){
    count2+=(c=='1');
  }
  cout<<((count1==count2)?"YES\n":"NO\n");
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


