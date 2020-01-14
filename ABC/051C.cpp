#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int sx,sy,tx,ty;
  cin >> sx >> sy >> tx >> ty;
  int x = tx - sx;
  int y = ty - sy;
  for(int i = 0; i < y; i++){
    cout << 'U';
  }
  for(int i = 0; i < x; i++){
    cout << 'R';
  }
  for(int i = 0; i < y; i++){
    cout << 'D';
  }
  for(int i = 0; i < x; i++){
    cout << 'L';
  }
  cout << 'L';
  for(int i = 0; i < y + 1; i++){
    cout << 'U';
  }
  for(int i = 0; i < x + 1; i++){
    cout << 'R';
  }
  cout << "DR";
  for(int i = 0; i < y + 1; i++){
    cout << 'D';
  }
  for(int i = 0; i < x + 1; i++){
    cout << 'L';
  }
  cout << 'U' << endl;
}
