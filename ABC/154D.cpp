#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int> p(N);
  for(int i = 0; i < N; i++){
    cin >> p[i];
  }
  vector<double> E(N);
  for(int i = 0; i < N; i++){
    E[i] = (double) (p[i] + 1) / 2;
  }
  double sum = 0;
  for(int i = 0; i < K; i++){
    sum += E[i];
  }
  double sumMax = sum;
  for(int i = 1; i + K <= N; i++){
    sum = sum - E[i-1] + E[i+K-1];
    sumMax = max(sumMax, sum);
  }
  cout << fixed << setprecision(10) << sumMax << endl;
}
