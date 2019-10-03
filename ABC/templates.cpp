#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll combination(ll n, ll k){
  ll res = 1;
  ll tmp = 1;  
  for(int i = 0; i < k; ++i){
    res *= n - i;
    tmp *= k - i;
  }
  return res / tmp;
}

ll gcd(ll a, ll b){
  if(b == 0) return a;
  return gcd(b, a%b);
}

int main(){
  cout << gcd(28, 7) << endl;
}
