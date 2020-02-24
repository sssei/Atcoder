#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  ll N,D,K;
  cin >> N >> D >> K;
  vector<pair<ll,ll>> LR(D);
  for(int i = 0; i < D; i++){
    cin >> LR[i].first >> LR[i].second;
  }
  for(int i = 0; i < K; i++){
    ll s, t;
    cin >> s >> t;
    ll now = s;
    for(int j = 0; j < D; j++){
      if(now <= LR[j].second && now >= LR[j].first){
	if(t < s){
	  now = LR[j].first;
	  if(now <= t){
	    cout << j + 1 << endl;
	    break;
	  }
	}else{
	  now = LR[j].second;
	  if(now >= t){
	    cout << j + 1 << endl;
	    break;
	  }
	}
      }
    }
  }
}
