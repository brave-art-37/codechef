#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int a,b,c;cin>>a>>b>>c;
  map<int,int> freq;
  for(int i=0;i<a+b+c;i++){
    int tmp;cin>>tmp;
    freq[tmp]++;
  }
  vector<int> ans;
  for(auto p:freq){
    if(p.second<2) continue;
    ans.push_back(p.first);
  }
  sort(ans.begin(),ans.end());
  cout<<ans.size()<<"\n";
  for(int i:ans){
    cout<<i<<"\n";
  }
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}
