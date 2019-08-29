#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<ll> x(N);
  for(int i = 0; i < N; i++) cin >> x[i];
  ll res = 1LL << 60;
  for(int i = 0; i < N-K+1; i++){
    ll left = x[i];
    ll right = x[i+K-1];
    res = min(res, min(abs(left), abs(right)) + right - left);
  }
  cout << res << endl;
    
}
