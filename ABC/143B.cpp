#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i = 0; i < N; ++i){
    cin >> d[i];
  }
  ll res = 0;
  for(int i = 0; i < N; ++i){
    for(int j = i+1; j < N; ++j){
      res += d[i] * d[j];
    }
  }
  cout << res << endl;
}
