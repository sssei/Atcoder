#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<ll> a(N),b(N),c(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < N; ++i){
    cin >> b[i];
  }
  for(int i = 0; i < N; ++i){
    cin >> c[i];
  }
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());

  ll ans = 0;
  for(int i = 0; i < N; ++i){
    ll up = upper_bound(c.begin(), c.end(), b[i]) - c.begin();
    up = N - up;
    ll down = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    ans += up * down;
  }
  cout << ans << endl;
}
