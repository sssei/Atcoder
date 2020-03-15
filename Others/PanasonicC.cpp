#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  if(c < a + b){
    cout << "No" << endl;
  }else{
    ll tmp = c - a - b;
    tmp = tmp * tmp;
    if(tmp > 4 * a * b){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}
