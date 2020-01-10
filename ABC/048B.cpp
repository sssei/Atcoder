#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  ll a,b,x;
  cin >> a >> b >> x;
  if(a)
    cout << b / x - (a-1)/x << endl;
  else
    cout << b / x  + 1 << endl;
}
