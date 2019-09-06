#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;
 
int main(){
  int H,W;
  cin >> H >> W;
  vector<string> S(H+2);
  for(int i = 1; i <= H; ++i){
    cin >> S[i];
    S[i] = "." + S[i] + ".";
  }
  S[0] = string(W+2, '.');
  S[H+1] = string(W+2, '.');
  bool flag = true;
  for(int i = 1; i <= H; ++i){
    for(int j = 1; j <= W; ++j){
      if(S[i][j] == '.') continue;
      if(S[i-1][j] == '.' && S[i][j-1] == '.' && S[i][j+1] == '.' && S[i+1][j] == '.' ){
	flag = false;
      }
    }
  }
 
 
  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
}
