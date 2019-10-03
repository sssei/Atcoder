#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll MAX = 1000000007;
ll N,K;
vector<ll> dp(2002,1);

void factorial(){
  for(int i = 1; i < 2002; ++i){
    dp[i] = (dp[i-1] * i) % MAX;
  }
}

ll combination(ll n, ll k){
  ll tmp1 = dp[n];
  ll tmp2 = dp[n-k];
  ll tmp3 = dp[k];
  return tmp1 /(tmp2 * tmp3);
}

ll count(ll i){
  if(N-K-i+1 < 0) return 0;
  ll blue = combination(K-1, i-1);
  cout << "dp " << dp[N-K+1] << " " << dp[N-K-i+1] << " " << dp[N-K+1] / dp[N-K-i+1] << endl;
  ll red = dp[N-K+1] / (dp[N-K-i+1] * dp[i]);
  cout << i << " " << blue << " " << red << endl;
  return blue * red % MAX;
}

int main(){
  factorial();
  cin >> N >> K;
  for(ll i = 1; i <= K; ++i){
    cout << count(i) << endl;
  }
}
