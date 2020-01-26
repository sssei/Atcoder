#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  double N,K;
  cin >> N >> K;
  cout << setprecision(10) << (double) (6 * (K - 1) * (N - K)  + 1 + 3 * (N - 1)) / (N * N * N)  << endl;
}
