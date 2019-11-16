#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int H,W;
  cin >> H >> W;
  int a[H][W];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> a[i][j];
    }
  }
  vector< vector<int> > op;
  vector<int> tmp(4);
  int cnt = 0;
  for(int i = 0; i < H; i++){
    if(i % 2 == 0){
      for(int j = 0; j < W-1; j++){
	if(a[i][j] % 2 != 0){
	  tmp[0] = i+1;
	  tmp[1] = j+1;
	  tmp[2] = i+1;
	  tmp[3] = j+2;
	  cnt++;
	  op.push_back(tmp);
	  a[i][j+1]++;
	}
      }
      if(a[i][W-1] % 2 != 0 && i < H-1){
	tmp[0] = i+1;
	tmp[1] = W;
	tmp[2] = i+2;
	tmp[3] = W;
	cnt++;
	op.push_back(tmp);
	a[i+1][W-1]++;
      }
    }else{
      for(int j = W-1; j > 0; j--){
	if(a[i][j] % 2 != 0){
	  tmp[0] = i+1;
	  tmp[1] = j+1;
	  tmp[2] = i+1;
	  tmp[3] = j;
	  cnt++;
	  op.push_back(tmp);
	  a[i][j-1]++;
	}
      }
      if(a[i][0] % 2 != 0 && i < H-1){
	tmp[0] = i+1;
	tmp[1] = 1;
	tmp[2] = i+2;
	tmp[3] = 1;
	cnt++;
	op.push_back(tmp);
	a[i+1][0]++;
      }
    }
  }
  
  cout << cnt << endl;
  for(int i = 0 ; i < cnt; i++){
    cout << op[i][0] << " " << op[i][1] << " " << op[i][2] << " " << op[i][3] << endl;
  }
}
