#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ll N,K;
  cin >> N >> K;
  vector<ll> a(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }

  ll cnt = 0LL;
  ll res = 0LL;
  ll right = -1;
  for(int i = 0; i < N; ++i){
    while(right < N && res < K){
      right++;
      res += a[right];
    }
    if(res >= K){
      cnt += N - right;
    }
    res -= a[i];
  }
  cout << cnt << endl;


}
