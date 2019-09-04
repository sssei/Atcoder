#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int dp[100010];

int f(int n){
  if(n == 0){
    dp[0] = 0;
    return 0;
  }
  if(dp[n] != -1){
    return dp[n];
  }

  int res = f(n-1) + 1;
  int x = 6;
  while(x <= n){
    res = min(res, f(n-x) + 1);
    x *= 6;
  }
  x = 9;
  while(x <= n){
    res = min(res, f(n-x) + 1);
    x *= 9;
  }
  return dp[n] = res;
}

int main(){
  int N;
  cin >> N;
  for(int i = 0; i <= N; ++i){
    dp[i] = -1;
  }
  cout << f(N) << endl;
}
