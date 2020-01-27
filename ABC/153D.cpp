#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll H;
  cin >> H;
  ll res = 0;
  ll ans = 1;
  while(H > 0){
    H = H / 2;
    // res++;
    ans *= 2;
  }
  cout << ans - 1 << endl;
  
}
