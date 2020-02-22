#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> tmpa(N);
  vector<int> b(N);
  map<int, int> m;
  for(int i = 0; i < N; i++){
    cin >> a[i];
    tmpa[i] = a[i];
  }
  sort(a.begin(), a.end());
  ll res = 0;
  b[0] = 0;
  m[a[0]] = 0;
  for(int i = 1; i < N; i++){
    if(a[i] != a[i-1]){
      res++;
      m[a[i]] = res;
    }
    b[i] = res;
  }
  for(auto x: tmpa){
    cout << m[x] << endl;
  }
}
