#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

static const int M = 10007;

int main(){
  int n;
  cin >> n;
  vector<int> dp(n+1);
  dp[3] = 1;
  for(int i = 4; i <= n; i++){
    dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % M;
  }
  cout << dp[n] << endl;
  
}
