#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
const int MOD = 1000000007;

const int MAX = 1000000; //テーブルの大きさ

//aのn乗(mod MOD)を計算
ll modPow(ll a, ll n){ 
  if(n == 1) return a % MOD;
  if(n % 2 == 1) return (a * modPow(a, n-1)) % MOD;
  ll tmp = modPow(a, n/2);
  return (tmp * tmp) % MOD;
}

ll fac[MAX], finv[MAX], inv[MAX];
//テーブルを作る前処理 MAX=1000000 まで
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

//nが大きいとき
ll com[MAX];
void FastCOMinit(int n){
  COMint();
  com[0] = 1;
  for(int i = 1; i < MAX; i++){
    com[i] = (com[i-1] * (n - i + 1) % MOD) * inv[i] % MOD;
  }
}


int main(){
  ll n,a,b;
  cin >> n >> a >> b;
  ll two = modPow(2, n) - 1;
  FastCOMinit(n);
  ll res = (two - com[a] - com[b] + MOD + MOD) % MOD;
  cout << res << endl;
}
