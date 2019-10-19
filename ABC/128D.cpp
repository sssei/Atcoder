#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<ll> D(N);
  for(int i = 0; i < N; ++i){
    cin >> D[i];
  }
  ll ans = 0;
  for(int p = 0; p <= min(N, K); p++){
    for(int q = 0; p + q <= min(N, K); q++){
      vector<int> d;
      ll sum = 0;
      for(int i = 0; i < p; ++i){
	sum += D[i];
	d.push_back(D[i]);
      }
      for(int i = 0; i < q; ++i){
	sum += D[N-1-i];
	d.push_back(D[N-1-i]);
      }
      sort(d.begin(), d.end());
      for(int i = 0; i < K - p - q && i < d.size(); ++i){
	if(d[i] < 0) sum -= d[i];
      }
      ans = max(ans, sum);
    }
  }
  cout << ans << endl;
  
}
