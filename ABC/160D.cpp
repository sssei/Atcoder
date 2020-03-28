#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

ll N,X,Y;

ll shortPath(ll a, ll b){
  if(b <= X){
    return b - a;
  }
  if(b <= Y && a <= X){
    return min(b - a, Y - b + 1 + X - a);
  }
  if(b <= Y && a > X){
    return min(b - a, Y - b + 1 + a - X);
  }
  if(a <= X){
    return b - Y + 1 + X - a;
  }
  if(a <= Y){
    return min(b - a, a - X + 1 + b - Y);
  }
  return b - a;
}

int main(){
  cin >> N >> X >> Y;
  vector<ll> res(N);
  
  for(ll i = 1; i < N; i++){
    for(ll j = i + 1; j <= N; j++){
      ll tmp = shortPath(i, j);
      res[tmp]++;
    }
  }

  for(int i = 1; i < N; i++){
    cout << res[i] << endl;
  }
}
