#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int mini=0,maxi=0;
  string a,b;cin>>a>>b;
  int n=a.size();
  for(int i=0;i<n;i++){
    if((a[i]=='?' && b[i]=='?') || (a[i]=='?') || (b[i]=='?')){
      maxi++;
    }
    else if(a[i]!=b[i]){
      maxi++;mini++;
    }
  }
  cout<<mini<<' '<<maxi<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


