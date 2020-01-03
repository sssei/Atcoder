#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int H,W;
  cin >> H >> W;
  int c[10][10];
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      cin >> c[i][j];
    }
  }
  int A[H][W];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> A[i][j];
    }
  }
  for(int k = 0; k < 10; k++){
    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
	c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
      }
    }
  }
  int res = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(A[i][j] == -1){
	continue;
      }else{
	res += c[A[i][j]][1];
      }
    }
  }
  cout << res << endl;
}
