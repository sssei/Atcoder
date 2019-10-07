#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll MAX = 1000000007;
vector< vector<ll> > dp(2010, vector<ll>(2010,-1));

ll combi(int n, int k){
  if(k == 0 || n == k){
    dp[n][k] = 1;
    return 1;
  } 
  if(dp[n][k] != -1) return dp[n][k];
  if(dp[n][k] == -1){
    ll ans = combi(n-1, k) + combi(n-1, k-1);
    ans = ans % MAX;
    dp[n][k] = ans;
    return ans;
  }
}

int main(){
  int N,K;
  cin >> N >> K;
  for(int i = 1; i <= K; ++i){
    ll red, blue;
    if(N-K+1 < i) red = 0;
    else red = combi(N-K+1,i);
    blue = combi(K-1, i-1);
    cout << blue * red % MAX << endl;
  }
}
