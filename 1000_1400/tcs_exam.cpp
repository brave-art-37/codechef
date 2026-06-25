#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  vector<int> a(3),b(3);
  cin>>a[0]>>a[1]>>a[2];
  cin>>b[0]>>b[1]>>b[2];
  int sum1=a[0]+a[1]+a[2];
  int sum2=b[0]+b[1]+b[2];
  if(sum1>sum2) cout<<"DRAGON\n";
  else if(sum2>sum1) cout<<"SLOTH\n";
  else{
    if(a>b) cout<<"DRAGON\n";
    else if(b>a) cout<<"SLOTH\n";
    else cout<<"TIE\n";
  }
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


