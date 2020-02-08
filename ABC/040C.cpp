#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<ll> a(N);
  vector<ll> dp(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  dp[0] = 0;
  dp[1] = abs(a[0] - a[1]);
  for(int i = 2; i < N; i++){
    dp[i] = min(dp[i-1] + abs(a[i] - a[i-1]), dp[i-2] + abs(a[i-2] - a[i]));
  }
  cout << dp[N-1] << endl;
}
