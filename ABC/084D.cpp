#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll Q;
  cin >> Q;			
  vector<ll> p;
  vector<ll> dp(100001);
  vector<bool> N(100001, false);

  dp[0] = dp[1] = 0;
  
  for(int i = 2; i <= 100000; i++){
    bool flag = true;
    for(auto x: p){
      if(i % x == 0){
	flag = false;
	break;
      }
      if(x * x > i){
	break;
      }
    }
    if(flag){
      p.push_back(i);
      N[i] = true;
    }
    if(i % 2 != 0 && N[i] && N[(i+1)/2]){
      dp[i] = dp[i-1] + 1;
    }else{
      dp[i] = dp[i-1];
    }
  }

  vector< pair<ll,ll> > q(Q);
  for(int i = 0; i < Q; i++){
    cin >> q[i].first >> q[i].second;
  }

  for(int i = 0; i < Q; i++){
    cout << dp[q[i].second] - dp[q[i].first - 1] << endl;
  }
  
}
