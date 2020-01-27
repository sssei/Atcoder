#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll N,K;
  cin >> N >> K;
  vector<ll> H(N);
  for(int i = 0; i < N; i++){
    cin >> H[i];
  }
  sort(H.begin(), H.end());
  if(K >= N){
    cout << 0 << endl;
  }else{
    ll res = 0;
    for(int i = 0; i < N - K; i++){
      res += H[i];
    }
    cout << res << endl;
  }
}
