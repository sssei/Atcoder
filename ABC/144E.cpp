#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ll N,K;
  cin >> N >> K;
  vector<ll> A(N);
  vector<ll> F(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  for(int i = 0; i < N; i++){
    cin >> F[i];
  }
  sort(A.begin(), A.end());
  sort(F.begin(), F.end());
  for(int i = 0; i < N && K > 0; i++){
    if(K >= A[i]){
      K -= A[i];
      A[i] = 0;
    }else{
      A[i] -= K;
      K = 0;
    }
  }
  ll res = 0;
  for(int i = 0; i < N; i++){
    res += A[i] * F[N-1-i];
  }
  for(auto x: A){
    cout << x << endl;
  }
  for(auto x: F){
    cout << x << endl;
  }
  cout << res << endl;
}
