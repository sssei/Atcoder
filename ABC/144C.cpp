#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}
 
int main(){
  ll N;
  cin >> N;
  ll ans = N-1;
  for(ll p = 2; p * p <= N; ++p){
    if(N % p != 0) continue;
    ll q = N / p;
    ll tmp = p + q - 2;
    ans = min(tmp, ans);
  }
  cout << ans << endl;
}
