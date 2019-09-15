#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

static const ll MOD = 1000000007LL;

int main(){
  string S;
  cin >> S;
  int N = S.size();
  ll dp[N+1][13];
  for(int i = 0; i < N+1; ++i){
    for(int j = 0; j < 13; ++j){
      dp[i][j] = 0;
    }
  }
  dp[0][0] = 1LL;
  
  for(int i = 0; i < N; ++i){
    int c;
    if(S[i] == '?') c = -1;
    else c = S[i] - '0';
    for(int j = 0; j < 10; ++j){
      if(c != -1 && c != j) continue;
      for(int ki = 0; ki < 13; ++ki){
	dp[i+1][(10*ki + j) % 13] += dp[i][ki];
      }
    }
    for(int j = 0; j < 13; ++j) dp[i+1][j] %= MOD;
  }

  ll res = dp[N][5];
  cout << res << endl;
}
