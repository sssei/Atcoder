#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,x;
  cin >> N >> x;
  vector<int> a(N);
  ll res = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  if(a[0] > x){
    res += a[0] - x;
    a[0] = x;
  }
  for(int i = 1; i < N; i++){
    ll tmp = a[i] + a[i-1];
    if(tmp > x){
      res += tmp - x;
      a[i] = x - a[i-1];
    }
  }
  cout << res << endl;
}
