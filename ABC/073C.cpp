#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<ll> A(N);
  for(int i = 0; i < N; ++i){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  ll res = 0;
  bool flag = true;
  for(int i = 1; i < N; ++i){
    if(A[i] == A[i-1]){
      flag = !flag;
    }
    if(A[i] != A[i-1]){
      if(flag) res++;
      flag = true;
    }
  }
  if(flag) res++;
  cout << res << endl;
}
