#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  ll N,K;
  cin >> N >> K;
  vector<ll> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  ll res = 0;
  for(int i = 0; i < N; i++){
    int cnt =  min(N-1, (ll)i+K-1) - K + 1 - max((ll)i-K+1, 0LL) + 1;
    // cout << "i=" << i << " min(N-1, i+K-1)=" << min(N-1, (ll)i+K-1) << " max(i-K+1,0)=" << max(i-K+1, 0LL) << endl;
    res += cnt * a[i];
  }
  cout << res << endl;
}
