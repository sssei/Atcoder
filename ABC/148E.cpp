#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll count(ll n){
  ll res = 0;
  ll d = 10;
  while(d <= n){
    res += n / d;
    d *= 5;
  }
  return res;
}

int main(){
  ll N;
  cin >> N;
  if(N % 2 == 0){
    cout << count(N) << endl;
  }else{
    cout << 0 << endl;
  }
}
