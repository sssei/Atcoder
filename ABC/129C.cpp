#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> a(M);
  vector<ll> dp(N+1);
  for(int i = 0; i < M; i++){
    cin >> a[i];
    a[i];
    dp[a[i]] = -1;
  }
  dp[0] = 1;
  for(int i = 1; i <= N; i++){
    if(dp[i] == -1){
      dp[i] = 0;
      continue;
    } 
    if(i != 1) dp[i] = dp[i-1] + dp[i-2];
    else dp[i] = 1;
    dp[i] = dp[i] % 1000000007;
  }
  cout << dp[N] << endl;
}
