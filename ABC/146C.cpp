#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll digit(ll x){
  ll tmp = x;
  ll cnt = 0;
  while(tmp){
    tmp = tmp / 10;
    cnt++;
  }
  return cnt;
}

int main(){
  ll A,B,X;
  cin >> A >> B >> X;
  ll right = 1000000000;
  ll left = 1;
  ll center = (right + 1)/2;
  while(left + 1 < right){
    ll d = digit(center);
    ll cost = A * center + B * d;
    if(cost > X){
      right = center;
      center = (left + right)/2;
    }else{
      left = center;
      center = (left + right)/2;
    }
  }
  ll d = digit(right);
  ll cost = A * right + B * d;
  if(cost <= X){
    cout << right << endl;
  }else{
    ll c = A * left + B * digit(left);
    if(c <= X){
      cout << left << endl;
    }else{
      cout << 0 << endl;
    }
  }
}
