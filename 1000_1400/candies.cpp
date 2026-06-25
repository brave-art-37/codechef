#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  map<int,int> freq;
  for(int i=0;i<2*n;i++){
    int tmp;cin>>tmp;
    freq[tmp]++;
  }
  for(auto p:freq){
    if(p.second>2){
      cout<<"No\n";
      return;
    }
  }
  cout<<"Yes\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


