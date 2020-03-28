#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll K,N;
  cin >> K >> N;
  vector<ll> A(N);
  ll res = -1;
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  for(int i = 1; i < N; i++){
    ll tmp = A[i] - A[i-1];
    res = max(res, tmp);
  }
  ll tmp = K - A[N-1] + A[0];
  res = max(res, tmp);
  cout << K - res << endl;
}
