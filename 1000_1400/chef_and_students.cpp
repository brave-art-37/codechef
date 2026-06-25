#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  string s;cin>>s;
  for(char &c:s){
    if(c=='>') c='<';
    else if(c=='<') c='>';
  }
  int ans=0;
  for(int i=0;i<s.size()-1;i++){
    if(s[i]=='>' && s[i+1]=='<') ans++;
  }
  cout<<ans<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


