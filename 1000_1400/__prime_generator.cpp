#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

vector<bool> isit(1e9,1);

void solve(){
  long long n,m;cin>>m>>n;
  for(long long i=m-1;i<=n-1;i++){
    if(isit[i]==0) continue;
    cout<<i+1<<"\n";
  }
  cout<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t = 1;
    cin >> t;
    isit[0]=0;
    for(long long i=1;i<=1e9;i++){
      if(isit[i]==0) continue;
      long long j=(i+1);
      while((i+1)*j-1<=1e9){
        isit[(i+1)*j-1]=0;
        j++;
      }
    }
    while (t--){solve();}
}
