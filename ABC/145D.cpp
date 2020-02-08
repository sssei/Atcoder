#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

const int MAX = 1000000;

ll fac[MAX], finv[MAX], inv[MAX];
//テーブルを作る前処理 MAX=510000 まで
void COMint(){
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for(int i = 2; i < MAX; i++){
    fac[i] = fac[i-1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i-1] * inv[i] % MOD;
  }
}
//二項係数計算
ll COM(int n, int k){
  if(n < k) return 0;
  if(n < 0 || k < 0) return 0;
  return fac[n] * (finv[n-k] * finv[k] % MOD) % MOD;
}

int main(){
  COMint();
  int X,Y;
  cin >> X >> Y;
  if((X + Y) % 3 != 0 || Y > 2 * X || X > 2 * Y){
    cout << 0 << endl;
    return 0;
  }else{
    int n = (X + Y) / 3;
    int k = X - n;
    cout << COM(n, k) << endl;
  }
}
