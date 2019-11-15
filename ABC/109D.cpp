#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int a[500][500];
vector< vector<int> > op;

int move(int x1, int y1, int x2, int y2){
  int res = 0;
  vector<int> tmp(4);
  int start = x1;
  int end = x2;
  if(x1 > x2){
    while(start != end){
      tmp[0] = y1;
      tmp[1] = start;
      tmp[2] = y2;
      tmp[3] = 
      start--;
    }
  }
}

int main(){
  int H,W;
  cin >> H >> W;
  int cnt = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> a[i][j];
      cnt += a[i][j];
    }
  }
  
}
