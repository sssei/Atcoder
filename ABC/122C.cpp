#include <vector>
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
  
int main(){
  int N,Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  vector < vector<int> > vec(Q, vector<int>(2));
  vector<int> dp(N);
  for(int i = 0; i < Q; i++){
    int l,r; cin >> l >> r;
    vec[i][0] = --l;
    vec[i][1] = --r;
  }
  int cnt = 0;
  for(int i = 1; i < N; i++){
    if(S[i-1] == 'A' && S[i] == 'C'){
      cnt++;
    }
    dp.at(i) = cnt;
  }
  for(int i = 0; i < Q; i++){
    cout << dp[vec[i][1]] - dp[vec[i][0]] << endl;
  }
}
