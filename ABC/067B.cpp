#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int> l(N);
  for(int i = 0; i < N; i++){
    cin >> l[i];
  }
  sort(l.begin(), l.end());
  int res = 0;
  for(int i = 0; i < K; i++){
    res += l[N-1-i];
  }
  cout << res << endl;
}
