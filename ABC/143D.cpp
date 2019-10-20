#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ll N;
  cin >> N;
  vector<ll> L(N);
  for(int i = 0; i < N; ++i){
    cin >> L[i];
  }
  sort(L.begin(), L.end());
  ll a,b,c;
  ll res = 0;
  for(int i = 0; i < N-2; ++i){
    for(int j = i+1; j < N-1; ++j){
      a = L[i];
      b = L[j];
      auto itr2 = lower_bound(L.begin(), L.end(), a + b);
      int right = itr2 - L.begin();
      res += right - j - 1;
    }
  }
  cout << res << endl;
}
