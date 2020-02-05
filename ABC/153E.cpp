#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll MOD = 1000000007;
const ll INF = 1LL << 60;

int main(){
  ll H,N;
  cin >> H >> N;
  vector<ll> A(N),B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i] >> B[i];
  }
  vector< vector<ll> > dp(N+1, vector<ll>(H+1, INF));
  dp[0][0] = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j <= H; j++){
      dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
      dp[i+1][min(j+A[i],H)] = min(dp[i+1][min(j+A[i], H)], dp[i+1][j] + B[i]);
    }
  }
  cout << dp[N][H] << endl;
}
