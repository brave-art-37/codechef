#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  vector<int> freq(26);
  for(char c:s){
    freq[c-'a']++;
  }
  int isit=1;
  for(int i=0;i<26;i++){
    isit&=(freq[i]%2==0);
  }
  cout<<(isit?"YES\n":"NO\n");
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


