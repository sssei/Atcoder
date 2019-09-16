#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  int F[N][10];
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < 10; ++j){
      cin >> F[i][j];
    }
  }
  int P[N][11];
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < 11; ++j){
      cin >> P[i][j];
    }
  }

  ll ans = -1000000000LL;
  for(int m = 1; m < (1 << 10); ++m){
    ll profit = 0;
    for(int i = 0; i < N; ++i){
      int c = 0;
      for(int j = 0; j < 10; ++j){
  	int op = (m >> j) & 1;
  	if(op && F[i][j]) c++;
      }
      profit += P[i][c];
    }
    ans = max(profit, ans);
  }

  cout << ans << endl;
  
}
