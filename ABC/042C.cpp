#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;


int main(){
  int N,K;
  cin >> N >> K;
  vector<int> D(K);
  vector<bool> d(10, false);
  for(int i = 0; i < K; i++){
    cin >> D[i];
    d[D[i]] = true;
  }
  ll res = N;
  while(1){
    ll tmp = res;
    bool flag = true;
    while(tmp){
      if(d[tmp%10]){
	flag = false;
	break;
      }
      tmp = tmp / 10;
    }
    if(flag){
      break;
    }else{
      res++;
    }
  }
  cout << res << endl;
}
