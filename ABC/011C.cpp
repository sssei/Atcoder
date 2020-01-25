#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  int ng1,ng2,ng3;
  cin >> ng1 >> ng2 >> ng3;
  vector<int> dp(100000);
  dp[ng1] = dp[ng2] = dp[ng3] = -1;
  for(int i = 1; i <= N; i++){
    int res = MOD;
    if(dp[i] != -1){
      if(dp[i-1] != -1){
	res = dp[i-1] + 1;
      }
      if(dp[i-2] != -1 && i >= 2){
	res = min(res, dp[i-2] + 1);
      }
      if(dp[i-3] != -1 && i >= 3){
	res = min(res, dp[i-3] + 1);
      }
      if(res >= MOD){
	dp[i] = -1;
      }else{
	dp[i] = res;
      }
    }
  }
  if(dp[N] == -1 || dp[N] > 100){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
}
