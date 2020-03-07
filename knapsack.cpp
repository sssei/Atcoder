#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

ll weight[110], value[110];

ll dp[110][10010];

ll knapsack01(ll N, ll W){ //01ナップザック問題 n個重さW
  for(int w = 0; w <= W; ++w) dp[0][w] = 0;
  for(int i = 0; i < N; i++){
    for(int w = 0; w <= W; w++){
      if(w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
      else dp[i+1][w] = dp[i][w];
    }
  }
  return dp[n][W];
}

ll knapsack(ll N, ll W){
  for(int w = 0; w <= W; ++w) dp[0][w] = 0;
  for(int i = 0; i < n; i++){
    for(int w = 0; w <= W; w++){
      dp[i+1][w] = max(dp[i+1][w], dp[i][w]);
      if(w + weight[i] <= W) dp[i+1][w+weight[i]] = dp[i+1][w] + value[i];
    }
  }
  return dp[n][W];
}

int main() {
  ll N,W;
  cin >> N >> W;
  for (int i = 0; i < N; ++i) cin >> value[i] >> weight[i];
  cout << knapsack01(N, W) << endl;
}


