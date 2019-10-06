#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int H,W;
  cin >> H >> W;
  vector<string> S(H);
  for(int i = 0; i < H; i++){
    cin >> S[i];
  }
  int row[H][W];
  int column[H][W];
  for(int i  = 0; i < H; i++){
    int cnt = 0;
    int j;
    for(j = 0; j < W; j++){
      if(S[i][j] == '.') cnt++;
      else{
	row[i][j] = 0;
	for(int k = j - cnt; k < j; k++){
	  row[i][k] = cnt;
	}
	cnt = 0;
      }
    }
    if(cnt){
      for(int k = j - cnt; k < j; k++){
	row[i][k] = cnt;
      }
    }
  }

  for(int i = 0; i < W; i++){
    int cnt = 0;
    int j;
    for(j = 0; j < H; j++){
      if(S[j][i] == '.') cnt++;
      else{
	column[j][i] = 0;
	for(int k = j - cnt; k < j; k++){
	  column[k][i] = cnt;
	}
	cnt = 0;
      }
    }
    if(cnt){
      for(int k = j - cnt; k < j; k++){
	column[k][i] = cnt;
      }
    }
  }

  int ans[H][W];

  int max_ans = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      int tmp = row[i][j] + column[i][j] - 1;
      max_ans = max(max_ans, tmp);
    }
  }

  cout << max_ans << endl;
  
}
