#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  ll D,G;
  cin >> D >> G;
  vector<ll> p(D),c(D);
  for(int i = 0; i < D; i++){
    cin >> p[i] >> c[i];
  }

  int ans = 1e9;
  for(int mask = 0; mask < (1 << D); mask++){
    int s = 0; int num = 0; int res_max = -1;
    for(int i = 0; i < D; i++){
      if((mask >> i) & 1){
	s += 100 * (i+1) * p[i] + c[i];
	num += p[i];
      }else{
	res_max = i;
      }
    }

    if(s < G){
      int s1 = 100 * (res_max + 1);
      int res = (G - s + s1 - 1) / s1;
      if(res >= p[res_max]){
	continue;
      }
      num += res;
    }

    ans = min(ans, num);
  }

  cout << ans << endl;
}

