#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  int N; cin >> N;
  vector<ll> A(N);
  vector<ll> res(N+1);
  for(int i = 0; i < N; i++){
    cin >> A[i];
    res[A[i]]++;
  }
  vector<ll> Com(N+1);
  ll sum = 0;  
  for(int i = 1; i <= N; i++){
    Com[i] = res[i] * (res[i] - 1) / 2;
    sum += Com[i];
  }
  for(int i = 0; i < N; i++){
    ll tmp = Com[A[i]];
    ll com = (res[A[i]] - 1) * (res[A[i]] - 2) / 2;
    ll res = sum - tmp + com;
    cout << res << endl;
  }
}
