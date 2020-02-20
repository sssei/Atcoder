#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<ll> A(N);
  vector<ll> ones(60);
  for(int i = 0; i < N; i++){
    cin >> A[i];
    for(int j = 0; j < 60; j++){
      if((A[i] >> j) & 1){
	ones[j]++;
      }
    }
  }
  ll res = 0;
  ll d = 1;
  for(int i = 0; i < 60; i++){
    res = ((((((N-ones[i]) * ones[i]) % MOD) * d) % MOD) + res) % MOD;
    d = (d * 2) % MOD;
  }
  cout << res  << endl;
}
