#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int H,W;
  cin >> H >> W;
  vector<string> S(H+2);
  string str(W+2, '.');
  S[0] = str;
  S[H+1] = str;
  for(int i = 1; i < H+1; ++i){
    string s;
    cin >> s;
    S[i] = '.' + s + '.';
  }
  int ans[H+2][W+2];
  for(int i = 1; i < H + 1; ++i){
    for(int j = 1; j < W + 1; ++j){
      if(S[i][j] == '#'){
	ans[i][j] = -1;
	continue;
      }
      int cnt = 0;
      for(int k = -1; k < 2; ++k){
	if(S[i-1][j+k] == '#') cnt++;
	if(S[i+1][j+k] == '#') cnt++;
      }
      if(S[i][j-1] == '#') cnt++;
      if(S[i][j+1] == '#') cnt++;
      ans[i][j] = cnt;
    }
  }

  for(int i = 1; i < H + 1; ++i){
    for(int j = 1; j < W + 1; ++j){
      if(ans[i][j] == -1) cout << '#';
      else cout << ans[i][j];
    }
    cout << endl;
  }
}
