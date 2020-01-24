#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1000000007;
vector<bool> prime;

int main(){
  int N;
  cin >> N;
  prime.resize(N+1, true);
  prime[0] = prime[1] = false;
  vector<int> p;
  for(int i = 2; i <= N; i++){
    if(prime[i] == true){
      p.push_back(i);
      for(int j = 2; i * j <= N; j++){
	prime[i * j] = false;
      }
    }
  }
  ll res = 1;
  for(auto x: p){
    int cnt = 0;
    int tmp = x;
    while(tmp <= N){
      cnt += N / tmp;
      tmp *= x;
    }
    res = res * (cnt + 1) % MOD;
  }
  cout << res << endl;
}
