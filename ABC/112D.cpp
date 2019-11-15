#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ll N,M;
  cin >> N >> M;
  ll res;
  for(ll p = 1; p * p <= M; p++){
    if(M % p == 0){
      ll tmp;
      if(M/p >= N){
	tmp = p;
	res = max(res, tmp);
      }
      if(p >= N){
	tmp = M/p;
	res = max(res, tmp);
      }
    }
  }
  cout << res << endl;
}
