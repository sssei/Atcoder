#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<ll> a(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  ll tmp = 0;
  for(int i = 0; i < N; ++i){
    if(i%2) tmp -= a[i];
    else tmp += a[i];
  }
  vector<int> x(N);
  x[0] = tmp/2;
  for(int i = 1; i < N; ++i){
    x[i] = a[i-1] - x[i-1];
  }
  for(int i = 0; i < N; ++i){
    if(i) cout << " ";
    cout << 2 * x[i];
  }
  cout << endl;
}
