#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

template < typename T > inline string toString( const T &a ) { ostringstream oss; oss << a; return oss.str(); };

ll dp[20][2][2];
ll digitDP(string N){
  int L = N.size();
  fill((ll*)dp, (ll*)dp + sizeof(dp)/sizeof(ll), 0);
  dp[0][0][0] = 1;
  for(int i = 0; i < L; i++){
    int D = N[i] - '0';
    for(int j = 0; j < 2; j++){
      for(int k = 0; k < 2; k++){
	for(int d = 0; d <= (j ? 9 : D); d++){
	  dp[i+1][j || (d < D)][k || d == 4 || d == 9] += dp[i][j][k];
	}
      }
    }
  }
  return dp[L][0][1] + dp[L][1][1];
}
  
int main(){
  ll A,B;
  cin >> A >> B;
  cout << digitDP(toString(B)) - digitDP(toString(A-1)) << endl;
}
