#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll H,W;
  cin >> H >> W;
  if(H == 1 || W == 1){
    cout << 1 << endl;
    return 0;
  }
  if(H % 2 == 0){
    if(W % 2 == 0){
      cout << H / 2 * W << endl;
    }else{
      cout << H * (W - 1) / 2 + H / 2 << endl;
    }
  }else{
    ll tmp = (H - 1) * W / 2;
    ll a = W / 2;
    if(W % 2 == 0){
      cout << tmp + a << endl;
    }else{
      ll tmp = (H - 1) * (W - 1) / 2;
      ll b = H / 2;
      ll c = W / 2;
      cout << tmp + b + c + 1 << endl;
    }
  }

}
