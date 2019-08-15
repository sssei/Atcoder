#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

ll gcd(ll num1, ll num2){
  if(num1 > num2){
    swap(num1, num2);
  }
  ll r = num2 % num1;
  while(r != 0){
    num2 = num1;
    num1 = r;
    r = num2 % num1;
  }
  return num1;
}

ll lcm(ll num1, ll num2){
  return num1 * num2 / gcd(num1, num2);
}

int main(){
  ll A,B,C,D;
  cin >> A >> B >> C >> D;

  ll c_r = B / C;
  ll c_l = (A - 1) / C;
  ll d_r = B / D;
  ll d_l = (A - 1) / D;
  ll cd_r = B / lcm(C, D);
  ll cd_l = (A - 1) / lcm(C, D);

  ll tmp = c_r - c_l + d_r - d_l - (cd_r - cd_l);
  cout << B - A + 1 - tmp << endl;
}
