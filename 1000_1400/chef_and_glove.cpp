#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> fingers(n);
  vector<int> sheath(n);
  for(int &x:fingers){cin>>x;}
  for(int &x:sheath){cin>>x;}
  int front=1,back=1;
  for(int i=0;i<n;i++){
    front&=(fingers[i]<=sheath[i]);
    back&=(fingers[i]<=sheath[n-1-i]);
  }
  if(front&back) cout<<"both\n";
  else if(front) cout<<"front\n";
  else if(back) cout<<"back\n";
  else cout<<"none\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


