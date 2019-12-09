#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll g(ll n){
  ll tmp = n;
  ll res = 0;
  ll digit = 1;
  while(tmp){
    if(tmp == n){
      if(tmp%4 == 2 || tmp%4 == 1){
	res += 1;
      }
      tmp /= 2;
      digit *= 2;
      continue;
    }
    int judge = tmp % 2;
    tmp /= 2;
    if(judge == 0){
      digit *= 2;
      continue;
    } 
    ll cnt = n % digit + 1;
    if(cnt % 2 == 1) res += digit;
    digit *= 2;
  }
  return res;
}

int main(){
  ll r = g(0b10);
  ll A,B;
  cin >> A >> B;
  if(A == 0){
    cout << g(B) << endl;
  }else{
    ll a = g(A-1);
    ll b = g(B);
    ll c = a^b;
    cout << c << endl;
  }
}
