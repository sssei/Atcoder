#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

ll H,N;
vector< pair<double, pair<ll, ll> > > ab;

ll damage(ll H, ll cnt, ll i){
  cout << "H:" << H << " cnt:" << cnt << " i:" << i << endl;
  if(H <= 0){
    return cnt;
  }
  if(H >= ab[i].second.first){
    cout << "flag0 H:"  << H << " cnt:" << cnt << " i:"  << i << endl;
    return damage(H-ab[i].second.first, cnt+ab[i].second.second, i);
  }else{
    ll res = ab[i].second.second + cnt;
    for(ll j = i+1; j < N; j++){
      if(ab[j].second.first >= ab[i].second.first){
	continue;
      }
      cout << "flag H:" << H << " cnt:" << cnt << " i:" << i << endl;
      res = min(res, damage(H, cnt, j));
      return res;
    }
    return res;
  }

}


int main(){
  cin >> H >> N;
  ab.resize(N);
  for(int i = 0; i < N; i++){
    cin >> ab[i].second.first >> ab[i].second.second;
    ab[i].first = (double) ab[i].second.second / ab[i].second.first;
    cout << "i:" << i << " ab[i].first:" << ab[i].first << " A:" << ab[i].second.first << " B:" << ab[i].second.second << endl;
  }
  sort(ab.begin(), ab.end());
  for(auto x: ab){
    cout << x.first << " " << x.second.first << " " << x.second.second << endl;
  }
  cout << damage(H, 0, 0) << endl;
}
