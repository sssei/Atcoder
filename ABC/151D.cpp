#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int H,W;
  cin >> H >> W;
  int S[H][W];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      char buf;
      cin >> buf;
      if(buf == "."){
	S[i][j] = 0;
      }else{
	S[i][j] = -1;
      }
    }
  }
  
  
}
