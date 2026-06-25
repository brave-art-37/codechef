#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> freq(10);
  while(n--){
    int tmp;cin>>tmp;
    freq[tmp-1]++;
  }
  int count=0,maxi=0,ind=0;
  for(int i=0;i<10;i++){
    if(freq[i]<maxi) continue;
    else if(freq[i]==maxi) count++;
    else{
      maxi=freq[i];
      count=1;
      ind=i+1;
    }
  }
  cout<<((count>1)?"CONFUSED":to_string(ind))<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}


