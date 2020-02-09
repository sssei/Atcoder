#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
const int MAX = 1000000;

class UnionFind{
public:
  vector<ll> par; //親を表す配列
  vector<ll> siz; //各集合のサイズ
  UnionFind(ll n): par(n), siz(n, 1LL){
    for(ll i = 0; i < n; i++) par[i] = i;
  }
  ll root(ll x){
    return par[x] == x ? x : par[x] = root(par[x]);
  }
  bool unite(ll x, ll y){
    x = root(x);
    y = root(y);
    if(x == y) return false;
    if(siz[x] < siz[y]){
      par[x] = y;
    }else{
      par[y] = x;
      if(siz[x] == siz[y]) siz[x]++;
    }
    return true;
  }
  bool same(ll x, ll y){
    return root(x) == root(y);
  }
};

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

vector<bool> prime_sieve; //素数かどうか
vector<ll> prime_numbers; //素数のリスト
void init_prime(ll n){
  prime_sieve.resize(n+1, true);
  prime_sieve[0] = prime_sieve[1] = false;
  for(ll i = 2; i <= n; i++){
    if(prime_sieve[i] == true){
      prime_numbers.push_back(i);
      for(ll j = 2; i * j <= n; j++){
	prime_sieve[i * j] = false;
      }
    }
  }
}

//素数か判定 O(sqrt(N))
bool is_prime(ll N){
  if(N <= 1) return false;
  for(ll i = 2; i * i <= N; i++){
    if(N % i == 0){
      return false;
    }
  }
  return true;
}

//最大公約数
ll gcd(ll a, ll b){ 
  if(b == 0) return a;
  return gcd(b, a % b);
}

//最小公倍数
ll lcm(ll a, ll b){ 
  return a * b / gcd(a, b);
}


int main(){

}
