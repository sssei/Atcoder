#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

ll r1,c1,r2,c2;
ll preDP[1000004];
ll dp[1000004];
ll preSum[1000004];
ll Sum[1000004];

ll func(int r, int c){
  dp[0] = Sum[0] = preDP[0] = preSum[0] = 1;
  for(int i = 1; i <= r; i++){
    preDP[i] = 1;
    preSum[i] = preDP[i] + preSum[i-1];
  }

  for(int j = 1; j <= c; j++){
    Sum[0] = j + 1;
    for(int i = 1; i <= r; i++){
      dp[i] = (dp[i-1] + preDP[i]) % MOD;
      Sum[i] = (Sum[i-1] + preSum[i] + dp[i]) % MOD;
    }
    for(int i = 1; i <= r; i++){
      preDP[i] = dp[i];
      preSum[i] = Sum[i];
    }
  }
  return Sum[r];
}

int main(){
  cin >> r1 >> c1 >> r2 >> c2;
  ll tmp = func(r2, c2);
  ll tmp1 = func(r1-1, c2);
  ll tmp3 = func(r1-1, c1-1);
  ll tmp2 = func(r2, c1-1);
  cout << tmp - tmp1 - tmp2 + tmp3 << endl;
}
