#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int H,W,N;
  cin >> H >> W >> N;
  int tmp = max(H,W);
  cout << (N + tmp - 1) / tmp << endl;
}
