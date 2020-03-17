#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N; cin >> N;
  vector<ll> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  ll sum = 0;
  ll cost = 0;
  for(int i = 0; i < N; i++){
    sum += a[i];
    if(i % 2 == 0){
      if(sum <= 0){
	cost += -sum + 1;
	sum = 1;
      }
    }else{
      if(sum >= 0){
	cost += sum + 1;
	sum = -1;
      }
    }
  }
  ll sum2 = 0;
  ll cost2 = 0;
  for(int i = 0; i < N; i++){
    sum2 += a[i];
    if(i % 2 == 0){
      if(sum2 >=  0){
	cost2 += sum2 + 1;
	sum2 = -1;
      }
    }else{
      if(sum2 <= 0){
	cost2 += - sum2 + 1;
	sum2 = 1;
      }
    }
  }
  ll ans = min(cost, cost2);
  cout << ans << endl;
}
