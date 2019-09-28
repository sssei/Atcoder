#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

template<typename T>
T gcd(T a, T b){
  if(b == 0) return a;
  return gcd(b, a%b);
}


int main(){
  ll A,B;
  cin >> A >> B;
  ll g;
  if(A > B) g = gcd(A, B);
  else g = gcd(B, A);

  ll i = 2;
  ll cnt = 0;
  int tmp = g;
  for(ll p = 2; g > 1; ++p){
    if(g % p != 0) continue;
    while(g % p == 0) g /= p;
    cnt++;
  }

  cout << cnt + 1 << endl;
  
}
