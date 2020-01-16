#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  int ave = round((double)accumulate(a.begin(), a.end(), 0) / N);
  ll res = 0;
  for(int i = 0; i < N; i++){
    res += (a[i] - ave) * (a[i] - ave);
  }
  cout << res << endl;
}
