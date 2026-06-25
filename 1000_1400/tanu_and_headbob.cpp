#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  int a=0,b=0;
  for(char c:s){
    a+=(c=='Y');
    b+=(c=='I');
  }
  if(a>0) cout<<"NOT INDIAN\n";
  else if(b>0) cout<<"INDIAN\n";
  else cout<<"NOT SURE\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


