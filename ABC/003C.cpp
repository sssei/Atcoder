#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int> R(N);
  for(int i = 0; i < N; i++){
    cin >> R[i];
  }
  sort(R.begin(), R.end());
  double res = 0;
  for(int i = 0; i < K; i++){
    res = (res + R[N-K+i])/2;
  }
  printf("%.6f\n", res);
}
