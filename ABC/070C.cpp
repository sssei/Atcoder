#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

ll gcd(ll a, ll b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b){
  if(a % b == 0) return a;
  return a / gcd(a, b) * b;
}

int main(){
  int N; 
  cin >> N;
  vector<ll> T(N);
  for(int i = 0; i < N; i++){
    cin >> T[i];
  }
  ll res = T[0];
  for(int i = 1; i < N; i++){
    res = lcm(max(res, T[i]), min(res, T[i]));
  }
  cout << res << endl;
}
