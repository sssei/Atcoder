#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

static const ll MOD = 1000000007;

ll gcd(ll a, ll b){ 
  if(b == 0) return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b){ 
  return a * b / gcd(a, b);
}

int main(){
  ll N;
  cin >> N;
  vector<ll> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  ll res = 1;
  ll a = 0;
  for(int i = 0; i < N; i++){
    res = lcm(res, A[i]);
    if(res > MOD){
      a += res / MOD;
      res = res % MOD;
    }
  }
  ll ans = 0;
  for(int i = 0; i < N; i++){
    ll tmp = MOD / A[i];
    
  }
  cout << ans << endl;
}
