#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> nos(n);
  for(int &x:nos){cin>>x;}
  int maxi=0,curr=1;
  sort(nos.begin(),nos.end());
  for(int i=1;i<n;i++){
    if(nos[i]==nos[i-1]) curr++;
    else{
      maxi=max(curr,maxi);
      curr=1;
    }
  }
  maxi=max(maxi,curr);
  cout<<n-maxi<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


