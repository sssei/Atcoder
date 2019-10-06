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
  if(N <= K){
    
  }
  vector<ll> right(K+1), left(K+1);
  for(int i = 1; i <= K; i++){
    right[i] += D[N-i];
  }
}
